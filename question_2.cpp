#include <iostream>
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
};

int main(){
  cout << "Hello 2";
  return 0;
}