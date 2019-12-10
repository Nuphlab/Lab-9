#ifndef Cake_h
#define Cake_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Cake : public BakedGood {
public:
   Cake(string flavorOfCake = "none", string flavorOfFrosting = "none", double basePrice = 0.00, string typeOfCake = "", int quantity = 0);
   //virtual string ToString() = 0;
   //double DiscountedPrice();
protected:
   double basePriceCake;
   int cakeQuantity;
   string cakeType;
   string cakeFlavor;
   string frostingFlavor;
};

#endif