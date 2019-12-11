#include "Cake.h"

Cake::Cake(string flavorOfCake, string flavorOfFrosting, double basePrice, int quantity) :
   BakedGood(basePrice) {
   cakeFlavor = flavorOfCake;
   frostingFlavor = flavorOfFrosting;
   cakeQuantity = quantity;
}