#include "BakedGood.h"

BakedGood::BakedGood() {
   treatOptions = "";
   itemQuantity = 0;
   basePrice = 4.50;
}
BakedGood::BakedGood(string options, int quantity) {
   treatOptions = options;
   itemQuantity = quantity;
   basePrice = 4.500000;
}
string BakedGood::ToString() {
   string newString = to_string(basePrice);
   return newString;
}
