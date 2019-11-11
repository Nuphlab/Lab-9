//
//  Bread.hpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#ifndef Bread_h
#define Bread_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Bread : public BakedGood {
public:
   string ToString();
   double DiscountedPrice(int totalGoods);
protected:
   double totalDiscountedPrice;
   string basePriceDescription;
};
#endif /* Bread_hpp */