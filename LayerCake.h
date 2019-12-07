#ifndef LayerCake_h
#define LayerCake_h

#include "Cake.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double BASE_LAYERCAKE_PRICE = 9.00;

class LayerCake : public Cake {
public:
   LayerCake(string bakedGoodType = "none", string cakeFlavor = "none", string frostingFlavor = "none", int layers = 0, int quantity = 0);
   ~LayerCake();
   virtual string ToString();
   double DiscountedPrice(int totalGoods);
   void addToPrice(int cakeLayers);
   int GetQuantity();
   int GetTotalQuantity();
protected:
   string treatType;
   int cakeLayers;
   double basePrice;
   int cakeQuantity;
   int totalLayerCakeQuantity;
};

#endif