#include "Cake.h"

Cake::Cake(string flavorOfCake, string flavorOfFrosting) :
BakedGood(basePriceCake) {
   cakeFlavor = flavorOfCake;
   frostingFlavor = flavorOfFrosting;
}
/*string Cake::ToString() {
   string newString;
   return newString;
}
double Cake::DiscountedPrice() {
   int newPrice = 0;
   return newPrice;
} */