#ifndef BakedGood_h
#define BakedGood_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class BakedGood {
public:
   BakedGood(double price = 0);
   virtual string ToString();
   virtual double DiscountedPrice(int numItems) = 0;
   virtual int GetQuantity() = 0;
   virtual int GetTotalQuantity() = 0;
protected:
   double basePrice;
};

#endif 