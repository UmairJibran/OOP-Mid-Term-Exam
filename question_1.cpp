#include <iostream>
using namespace std;

class Pizza{
  private:
    char size;
    int cheeseToppings;
    int pepperoniToppings;
    int hamToppings;
    double totalCost;
  public:
    Pizza(){
      size = ' ';
      cheeseToppings = 0;
      pepperoniToppings = 0;
      hamToppings = 0;
      totalCost = 0.0;
    }

    void setSize(char size){
      switch(size){
        case 's':
        case 'S':{
          totalCost += 10.0;
          break;
        }
        case 'm':
        case 'M':{
          totalCost += 12.0;
          break;
        }
        case 'l':
        case 'L':{
          totalCost += 14.0;
          break;
        }
      }
    }
    void setCheeseToppings(int topping){
      for(int i = 0 ; i < topping ; i+=1){
        totalCost += 2.0;
      }
    }
    void setPepperoniToppings(int topping){
      for(int i = 0 ; i < topping ; i+=1){
        totalCost += 2.0;
      }
    }
    void setHamToppings(int topping){
      for(int i = 0 ; i < topping ; i+=1){
        totalCost += 2.0;
      }
    }
    double calculateCost(){
      return totalCost;
    }
};

int main(){
  Pizza singlePizza;
  char size;
  int cheeseToppings;
  int pepperoniToppings;
  int hamToppings;
  again:
  cout << "How do You want your Pizza" << endl
       << "S. Small" << endl
       << "M. Medium" << endl
       << "L. Large" << endl
       << " -> ";
  cin >> size;
  if(size == 's' || size == 'S' || size == 'L' || size == 'l' || size == 'M' || size == 'm'){
    singlePizza.setSize(size);
  }else{
    cout << "Invalid Entry" << endl;
    goto again;
  }
  cout << "Enter Number of Cheese Toppings" << endl
       << " -> ";
  cin >> cheeseToppings;
  singlePizza.setCheeseToppings(cheeseToppings);
  cout << "Enter Number of Pepperoni Toppings" << endl
       << " -> ";
  cin >> pepperoniToppings;
  singlePizza.setPepperoniToppings(pepperoniToppings);
  cout << "Enter Number of Ham Toppings" << endl
       << " -> ";
  cin >> hamToppings;
  singlePizza.setHamToppings(hamToppings);
  cout << endl << "Your Total Bill is: " << singlePizza.calculateCost();
  cout << endl << "======================" << endl;
  return 0;
}