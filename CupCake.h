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
#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

const double BASE_CUPCAKE_PRICE = 1.95;

class CupCake : public Cake {
public:
   CupCake();
   CupCake(string bakedGoodType = "", string cakeFlavor = "", string frostingFlavor = "", string colorSprinkles = "", int quantity = 0);
   virtual string ToString();
   virtual double DiscountedPrice(int totalGoods);
   void addToPrice(double price);
   int GetQuantity();
   int GetTotalQuantity();
protected:
   double totalDiscountedPrice;
   string basePriceDescription;
   string cakeType;
   string frosting;
   string sprinklesColor;
   int itemQuantity;
   int totalCupCakeQuantity;
};

#endif /* CupCake_hpp */