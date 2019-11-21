//
//  LayerCake.hpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#ifndef LayerCake_h
#define LayerCake_h

#include "Cake.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class LayerCake : public Cake {
public:
   LayerCake(string bakedGoodType = "none", string cakeFlavor = "none", string frostingFlavor = "none", int layers = 0, int quantity = 0);
   virtual string ToString();
   virtual double DiscountedPrice(int totalGoods);
   void addToPrice(int cakeLayers);
private:
   string treatType;
   string flavorOfCake;
   string flavorOfFrosting;
   int cakeLayers;
   double basePrice;
   int cakeQuantity;
};

#endif /* LayerCake_hpp */
