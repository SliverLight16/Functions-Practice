#include <iostream>
using namespace std;


float StepToMiles(int numSteps) {
   int feetPerMile;
   int feetPerStep;
   float milesTotal;
   
   feetPerMile = 5280;
   // Average Adult Male
   feetPerStep = 2.5; 
   
   milesTotal = numSteps * feetPerStep * (1.0 / feetPerMile);

   return milesTotal;
}
   
float StepToCals(int numSteps) {
   float stepsPerMinute;
   float calPerMinWalking;
   float minutesTotal;
   float calsTotal;
   
   //Typical Adult Male 
   stepsPerMinute = 70.0;
   calPerMinWalking = 3.5;
   minutesTotal = numSteps / stepsPerMinute;
   calsTotal = minutesTotal * calPerMinWalking;

   return calsTotal;
}

int main() {
   int stepsWalked;
   
   cin >> stepsWalked;
   
   cout << "Miles Walked: " << StepToMiles(stepsWalked) << "\n" 
   << "Calories: " << "\n" << StepToCals(stepsWalked);

   return 0;
}