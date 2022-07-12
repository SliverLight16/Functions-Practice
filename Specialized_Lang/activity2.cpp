#include <iostream>
using namespace std;

int main() {
   int stepsWalked;
   float milesTotal;
   int feetPerMile;
   int feetPerStep;
   float calsTotal;
   float stepsPerMinute;
   float calPerMinWalking;
   float minutesTotal;
   
   cin >> stepsWalked;
   feetPerMile = 5280;
   // Average Adult Male
   feetPerStep = 2.5;
   stepsPerMinute = 70.0;
   calPerMinWalking = 3.5;
   
   milesTotal = stepsWalked * feetPerStep * (1.0 / feetPerMile);
   minutesTotal = stepsWalked / stepsPerMinute;
   calsTotal = minutesTotal * calPerMinWalking;
   
   cout << "Miles Walked: " << milesTotal << "\n" << "Calories: " << calsTotal << "\n";
   
   return 0;
}