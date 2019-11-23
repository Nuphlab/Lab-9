#ifndef Bread_h
#define Bread_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Bread : public BakedGood {
public:
   Bread(string bakedGood = "none", string breadOptions = "none", int itemQuantity = 0);
   virtual string ToString();
   virtual double DiscountedPrice();
protected:
   string bakedGoodType;
   string breadType;
   int quantity;

};
#endif /* Bread_hpp */