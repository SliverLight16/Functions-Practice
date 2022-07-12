#include <iostream>
using namespace std;



float EbayFee(float sellPrice) {
   float feeTotal;
   feeTotal = 0.50;
   
   // Price is less than $50
   if (sellPrice <= 50.00) {
      feeTotal = feeTotal + (sellPrice * 0.13);}
   
   // Price is between $50.01 and $1000
   else if (sellPrice <= 1000.00) {
        feeTotal = feeTotal + (50 * 0.13);
        feeTotal = feeTotal + ((sellPrice - 50) * 0.05);}
   
   // Price is higher than $1000.00
    else {
        feeTotal = feeTotal +(50 * 0.13);
        feeTotal = feeTotal - ((1000 - 50) * 0.05);
        feeTotal = feeTotal + ((sellPrice - 1000) * 0.02);}

    return feeTotal;
}


int main() {
   float sellingPrice;
   
   cin >> sellingPrice;
   cout << "eBay fee: $" << EbayFee(sellingPrice);
}