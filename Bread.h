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
   Bread(string breadOptions = "none", int itemQuantity = 0);
   string ToString();
   double DiscountedPrice(int numItems);
protected:
   string breadType;
   int quantity;
};
#endif 