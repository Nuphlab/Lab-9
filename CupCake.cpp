//
//  CupCake.cpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include "CupCake.h"
CupCake::CupCake() {
   basePrice = 1.95;
}
CupCake::CupCake(string bakedGoodType, string options, int quantity) {
   treatType = bakedGoodType;
   treatOptions = options;
   itemQuantity = quantity;
   basePrice = 1.95;
}
void CupCake::ToString() {
   //Returns a string containing the basic description and base price of the object.
}
double CupCake::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   return totalDiscountedPrice;
}