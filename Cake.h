//
//  Cake.hpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#ifndef Cake_h
#define Cake_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Cake : public BakedGood {
public:
   Cake(string flavorOfCake = "none", string flavorOfFrosting = "none");
   virtual string ToString() = 0;
   double DiscountedPrice();
protected:
   double basePrice;
   string cakeFlavor;
   string frostingFlavor;
};

#endif /* Cake_hpp */
