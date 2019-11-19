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
   Bread();
   Bread(string bakedGoodType, string breadOptions, int quantity);
   virtual string ToString();
   virtual double DiscountedPrice(int totalGoods);
protected:
   string breadType;

};
#endif /* Bread_hpp */