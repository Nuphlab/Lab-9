#include "BakedGood.h"

BakedGood::BakedGood() {
  treatType = "";
   treatOptions = "";
   itemQuantity = 0;
}
BakedGood::BakedGood(string bakedGoodType, string options, int quantity) {
   treatType = bakedGoodType;
   treatOptions = options;
   itemQuantity = quantity;
}
//void BakedGood::ToString() {
//}
