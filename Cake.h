#ifndef Cake_h
#define Cake_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Cake : public BakedGood {
public:
   Cake(string flavorOfCake = "none", string flavorOfFrosting = "none");
   //virtual string ToString() = 0;
   //double DiscountedPrice();
protected:
   double basePriceCake;
   string cakeFlavor;
   string frostingFlavor;
};

#endif