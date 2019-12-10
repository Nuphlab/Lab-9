#include "BakedGood.h"

BakedGood::BakedGood(double price) {
   basePrice = price;
}
string BakedGood::ToString() {
   return "($" + to_string(basePrice) + ")";
}