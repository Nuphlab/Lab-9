//
//  LayerCake.cpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include "LayerCake.h"

string LayerCake::ToString() {
   //Returns a string containing the basic description and base price of the object.
   return basePriceDescription;
}
double LayerCake::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   return totalDiscountedPrice;
}