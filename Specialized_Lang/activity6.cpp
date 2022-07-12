#include <iostream>
using namespace std;


void PrintPizzaVolume(float pizzaDiameter, float pizzaHeight) {
   float piVal;
   float pizzaRadius;
   float pizzaArea;
   float pizzaVol;
   
   piVal = 3.14159265;
   pizzaRadius = pizzaDiameter / 2.0;
   pizzaArea = piVal * pizzaRadius * pizzaRadius;
   pizzaVol = pizzaArea * pizzaHeight;
   
   cout << pizzaDiameter << " x " << pizzaHeight << " inch pizza is " 
   << pizzaVol << " inches cubed.\n";
}
   
   
int main() {
   PrintPizzaVolume (12.0, 0.3);
   PrintPizzaVolume (12.0, 0.8);
   PrintPizzaVolume (16.0, 0.8);
return 0;
}