#include "BakedGood.h"

BakedGood::BakedGood() {
   treatType = "";
   treatOptions = "";
   itemQuantity = 0;
   basePrice = 4.50;
}
BakedGood::BakedGood(string bakedGoodType, string options, int quantity) {
   treatType = bakedGoodType;
   treatOptions = options;
   itemQuantity = quantity;
   basePrice = 4.50;
}
void BakedGood::ToString() {
   cout << basePrice;
}
