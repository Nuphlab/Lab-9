#ifndef BakedGood_h
#define BakedGood_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

const double BASE_BREAD_PRICE = 4.50;

class BakedGood {
public:
   BakedGood();
   virtual string ToString() = 0;
   virtual double DiscountedPrice(int numItems) = 0;
   virtual int GetQuantity() = 0;
   virtual int GetTotalQuantity() = 0;
protected:
   double basePrice;
};

#endif 


