#include <iostream>
using namespace std;


float CircleArea(float diameter) {
   float piVal;
   float circleRadius;
   float areaOfCircle;
   
   piVal = 3.14159265;
   circleRadius = diameter / 2.0;
   areaOfCircle = piVal * circleRadius * circleRadius;

   return areaOfCircle;
}

int main() {
   float pizzaDiameter1;
   float pizzaDiameter2;
   float totalArea;
   float circleArea1;
   float circleArea2;
   
   pizzaDiameter1 = 12.0;
   circleArea1 = CircleArea(pizzaDiameter1);
   
   pizzaDiameter2 = 14.0;
   circleArea2 = CircleArea(pizzaDiameter2);
   
   totalArea = circleArea1 + circleArea2;
   
   cout << "A 12 and 14 inch pizza has " << totalArea << " inches sqaured combined.";
   
   return 0;
}

