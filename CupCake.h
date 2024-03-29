#ifndef CupCake_h
#define CupCake_h

#include "Cake.h"
#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

const double BASE_CUPCAKE_PRICE = 1.95;

class CupCake : public Cake {
public:
   CupCake(string cakeFlavor = "", string frostingFlavor = "", string colorSprinkles = "", int quantity = 0);
   string ToString();
   double DiscountedPrice(int totalGoods);
   void addToPrice(double price);
protected:
   string frosting;
   string sprinklesColor;
};

#endif 