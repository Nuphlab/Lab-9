//
//  Bread.cpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include "Bread.h"

Bread::Bread(string bakedGood, string breadOptions, int itemQuantity) {
   breadType = breadOptions;
   quantity = itemQuantity;
   basePrice = 4.50;
}
string Bread::ToString() {
   //Returns a string containing the basic description and base price of the object.
   string newString;
   newString = /*bakedGood + */" " + breadType + " ($" + to_string(basePrice) + ")/n";
   return newString;
   //cout << treatOptions << " " << breadType << " ($" << fixed << setprecision(6) << basePrice << ")" << endl;
}
double Bread::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   return 0;
}