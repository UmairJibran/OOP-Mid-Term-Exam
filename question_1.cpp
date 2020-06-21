#include <iostream>
using namespace std;

class Pizza{
  private:
    string size;
    int cheeseToppings;
    int pepperoniToppings;
    int hamToppings;
  public:
    Pizza(){
      size = "";
      cheeseToppings = 0;
      pepperoniToppings = 0;
      hamToppings = 0;
    }

    void setSize(){

    }
    void setCheeseToppings(){

    }
    void setPepperoniToppings(){

    }
    void setHamToppings(){

    }
    double calculateCost(){
      return 0.0;
    }
};

int main(){
  cout << "Hello World";
  return 0;
}