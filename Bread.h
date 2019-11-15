#ifndef Bread_h
#define Bread_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Bread : public BakedGood {
public:
   Bread();
   Bread(string Breadtype, string options, int quantity);
   virtual void ToString();
   virtual double DiscountedPrice(int totalGoods);
protected:
   string breadType;
   double basePrice;
};
#endif /* Bread_hpp */