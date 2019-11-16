//
//  LayerCake.cpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include "LayerCake.h"
LayerCake::LayerCake() {
   basePrice = 9.00;
}
LayerCake::LayerCake(string bakedGoodType, string cakeFlavor, string frostingFlavor, int layers, int quantity) {
   treatType = bakedGoodType;
   flavorOfCake = cakeFlavor;
   flavorOfFrosting = frostingFlavor;
   cakeLayers = layers;
   cakeQuantity = quantity ;
   basePrice = 9.00;
}
void LayerCake::ToString() {
   //Returns a string containing the basic description and base price of the object.
   cout << cakeQuantity << "-layer " << flavorOfCake << " with " << flavorOfFrosting << " frosting ($" << fixed << setprecision(6) << basePrice << ")" << endl;
}
double LayerCake::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   return 0;
}