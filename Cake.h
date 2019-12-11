#ifndef Cake_h
#define Cake_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Cake : public BakedGood {
public:
   Cake(string flavorOfCake = "none", string flavorOfFrosting = "none", double basePrice = 0.00, int quantity = 0);
protected:
   double basePriceCake;
   int cakeQuantity;
   string cakeFlavor;
   string frostingFlavor;
};

#endif