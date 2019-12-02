#include "LayerCake.h"

LayerCake::LayerCake(string bakedGoodType, string cakeFlavor, string frostingFlavor, int layers, int quantity) :
   Cake(cakeFlavor, frostingFlavor) {
   treatType = bakedGoodType;
   cakeLayers = layers;
   cakeQuantity = quantity;
   basePrice = BASE_LAYERCAKE_PRICE;
   totalLayerCakeQuantity += quantity;
}
void LayerCake::addToPrice(int cakeLayers) {
   if (cakeLayers == 1 && Cake::frostingFlavor == "cream-cheese") {
      basePrice += 1;
      basePrice += cakeLayers;
   }
   else if (cakeLayers > 1 && Cake::frostingFlavor == "cream-cheese") {
      basePrice += 3 * (cakeLayers - 1);
      basePrice += cakeLayers;
   }
   else if (cakeLayers > 1) {
      basePrice += 3 * (cakeLayers - 1);
   }
}
string LayerCake::ToString() {
   //Returns a string containing the basic description and base price of the object.
   string newString;
   newString = to_string(cakeLayers) + "-layer " + Cake::cakeFlavor + " cake with " + Cake::frostingFlavor + " frosting ($" + to_string(basePrice) + ")";
   return newString;
}
double LayerCake::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   double total = 0;
   int discountRate;
   if (cakeQuantity >= 3) {
      discountRate = 2;
   }
   else {
      discountRate = 0;
   }
   total = (cakeQuantity * basePrice) - (discountRate * cakeQuantity);
   return total;
}
int LayerCake::GetQuantity() {
   return cakeQuantity;
}

int LayerCake::GetTotalQuantity() {
   return totalLayerCakeQuantity;
}
