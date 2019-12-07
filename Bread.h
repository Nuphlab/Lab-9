#ifndef Bread_h
#define Bread_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const double BREAD_BASE_PRICE = 4.50;

class Bread : public BakedGood {
public:
   Bread(string bakedGood = "none", string breadOptions = "none", int itemQuantity = 0);
   ~Bread();
   virtual string ToString();
   virtual double DiscountedPrice(int numItems);
   int GetQuantity();
   int GetTotalQuantity();
protected:
   string bakedGoodType;
   string breadType;
   int quantity;
   int totalBreadQuantity;
};
#endif /* Bread_hpp */
