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
   string ToString();
   double DiscountedPrice(int totalGoods);
protected:
   double totalDiscountedPrice;
   string basePriceDescription;
};

#endif /* LayerCake_hpp */
