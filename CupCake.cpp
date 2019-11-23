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
}
void CupCake::addToPrice(double price) {
   basePrice += price;
}
string CupCake::ToString() {
   //Returns a string containing the basic description and base price of the object.
   //cout << cakeFlavor << " " << cakeType << " with " << frosting << " frosting and " << sprinklesColor << " sprinkles ($" << fixed << setprecision(6) << basePrice << ")" << endl;
   string newString;
   newString = Cake::cakeFlavor + " " + cakeType + " with " + Cake::frostingFlavor + " frosting and " + sprinklesColor + " sprinkles ($" + to_string(basePrice) + ")\n";
   return newString;
}
double CupCake::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   return totalDiscountedPrice;
}