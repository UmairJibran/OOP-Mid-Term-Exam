#include <iostream>
using namespace std;

class Pizza{
  private:
    char size;
    int cheeseToppings;
    int pepperoniToppings;
    int hamToppings;
  public:
    Pizza(){
      size = ' ';
      cheeseToppings = 0;
      pepperoniToppings = 0;
      hamToppings = 0;
    }

    void setSize(char size){

    }
    void setCheeseToppings(int topping){

    }
    void setPepperoniToppings(int topping){

    }
    void setHamToppings(int topping){

    }
    double calculateCost(){
      return 0.0;
    }
};

int main(){
  Pizza singlePizza;
  char size;
  int cheeseToppings;
  int pepperoniToppings;
  int hamToppings;
  cout << "How do You want your Pizza" << endl
       << "S. Small" << endl
       << "M. Medium" << endl
       << "L. Large" << endl
       << " -> ";
  cin >> size;
  singlePizza.setSize(size);
  cout << "Enter Number of Cheese Toppings" << endl
       << " -> ";
  cin >> cheeseToppings;
  cout << "Enter Number of Pepperoni Toppings" << endl
       << " -> ";
  cin >> pepperoniToppings;
  cout << "Enter Number of Ham Toppings" << endl
       << " -> ";
  cin >> hamToppings;
  return 0;
}