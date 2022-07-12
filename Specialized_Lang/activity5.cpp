#include <iostream>
using namespace std;

// Dave if you ever see this, the activity never gave a main function, and I thought coral code need one

int PrintPizzaArea(float pizzaDiameter) {
   float piVal;
   float pizzaRadius;
   float pizzaArea;
   
   piVal = 3.14159265;
   pizzaRadius = pizzaDiameter / 2.0;
   pizzaArea = piVal * pizzaRadius * pizzaRadius;
   
   cout << pizzaDiameter << "in pizza is " << pizzaArea << " sq. in.\n";

   return 0;
}

int main() {
   PrintPizzaArea(18.12);
}