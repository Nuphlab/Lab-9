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
   LayerCake(string cakeFlavor = "none", string frostingFlavor = "none", int layers = 0, int quantity = 0);
   string ToString();
   double DiscountedPrice(int totalGoods);
   void addToPrice(int cakeLayers);
   int GetQuantity();
   int GetTotalQuantity();
protected:
   int cakeLayers;
   double basePriceLayerCake;
   int totalLayerCakeQuantity;
};

#endif