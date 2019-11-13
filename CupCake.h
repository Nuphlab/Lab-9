//
//  CupCake.hpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#ifndef CupCake_h
#define CupCake_h

#include "Cake.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class CupCake : public Cake {
public:
   CupCake();
   CupCake(string bakedGoodType, string options, int quantity);
   virtual void ToString();
   virtual double DiscountedPrice(int totalGoods);
protected:
   double totalDiscountedPrice;
   string basePriceDescription;
private:
   string flavor;
   string frosting;
   string sprinklesColor;
   double basePrice;
};

#endif /* CupCake_hpp */
