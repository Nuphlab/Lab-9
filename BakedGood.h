//
//  BakedGood.hpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#ifndef BakedGood_h
#define BakedGood_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class BakedGood {
public:
   BakedGood(double price = 0.00);
   virtual string ToString() = 0;
   virtual double DiscountedPrice() = 0;
protected:
   double basePrice;
};

#endif 



