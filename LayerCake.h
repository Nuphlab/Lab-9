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

using namespace std;

class LayerCake : public Cake {
public:
   LayerCake();
   LayerCake(string bakedGoodType, string options, int quantity);
   virtual void ToString();
   virtual double DiscountedPrice(int totalGoods);
private:
   string flavor;
   string frosting;
   int layers;
   double basePrice;
};

#endif /* LayerCake_hpp */
