#include <iostream>
#include <string> 
using namespace std;

class Player{
  private:
    string name;
    double average;
    string team;
  public: 
    Player(string name, string team, double average){
      this->name = name;
      this->team = team;
      this->average = average;
    }

    void setData(){

    }

    void update(char attribute, string newData){
      switch(attribute){
        case 'n':
        case 'N':{
          this->name = newData;
          break;
        }
        case 't':
        case 'T':{
          this->team = newData;
          break;
        }
        case 'a':
        case 'A':{
          this->average = stod(newData);
          break;
        }
      }
    }

    void displayData(){
      cout << endl << "Name: " << this->name;
      cout << endl << "Team: " << this->team;
      cout << endl << "Average: " << this->average;
    }
};

int main(){
  string name,team;
  double avg;
  cout << endl << "Enter Your Name : ";
  cin >> name;
  cout << endl << "Enter Your Team Name : ";
  cin >> team;
  cout << endl << "Enter Your Average Score : ";
  cin >> avg;
  Player player(name,team,avg);
  player.displayData();
  char att;
  string newValue;
  cout << endl << "Which Attribute would you like to update"
       << endl << "A. Average"
       << endl << "T. Team"
       << endl << "N. Name" 
       << endl << ": ";
  cin >> att;
  cout << "Enter New Value: ";
  cin >> newValue;
  player.update(att, newValue);
  player.displayData();
  return 0;
}