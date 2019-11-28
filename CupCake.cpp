//
//  CupCake.cpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include "CupCake.h"

CupCake::CupCake() {
}
CupCake::CupCake(string bakedGoodType, string flavorCake, string frostingFlavor, string colorSprinkles, int quantity) :
   Cake(flavorCake, frostingFlavor) {
   cakeType = bakedGoodType;
   itemQuantity = quantity;
   sprinklesColor = colorSprinkles;
   itemQuantity = quantity;
   basePrice = BASE_CUPCAKE_PRICE;
   totalCupCakeQuantity += quantity;
}
void CupCake::addToPrice(double price) {
   basePrice += price;
}
string CupCake::ToString() {
   //Returns a string containing the basic description and base price of the object.
   string newString;
   newString = Cake::cakeFlavor + " " + cakeType + " with " + Cake::frostingFlavor + " frosting and " + sprinklesColor + " sprinkles ($" + to_string(basePrice) + ")";
   return newString;
}
double CupCake::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   double total = 0;
   double discountRate = 0;
   if (itemQuantity >= 4) {
      discountRate = .40;
   }
   else if (itemQuantity >= 2 && itemQuantity < 4) {
      discountRate = .30;
   }

   total = (itemQuantity * basePrice) - (itemQuantity * discountRate);
   return total;
}
int CupCake::GetQuantity() {
   return itemQuantity;
}

int CupCake::GetTotalQuantity() {
   return totalCupCakeQuantity;
}
