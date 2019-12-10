#include "Cake.h"

Cake::Cake(string flavorOfCake, string flavorOfFrosting, double basePrice, string typeOfCake, int quantity) :
   BakedGood(basePrice) {
   cakeFlavor = flavorOfCake;
   frostingFlavor = flavorOfFrosting;
   cakeType = typeOfCake;
   cakeQuantity = quantity;
}