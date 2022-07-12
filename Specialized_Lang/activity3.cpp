#include <iostream>
using namespace std;

float ConvKilometerToMiles(int numKm) {
   float milesPerKm;
   float milesTotal;

   milesPerKm = 0.621371;
   milesTotal = numKm * milesPerKm;

   return milesTotal;
}

int main() {
    float distkm;
    float distMiles;

    cin >> distkm;
    distMiles = ConvKilometerToMiles(distkm);

    cout << "Miles Driven: " << distMiles;

    return 0;
}