#include "Bread.h"

Bread::Bread(string breadOptions, int itemQuantity) :
   BakedGood(BREAD_BASE_PRICE) {
   breadType = breadOptions;
   quantity = itemQuantity;
}
string Bread::ToString() {
   //Returns a string containing the basic description and base price of the object.
   string newString;
   newString = breadType + " " + "Bread" + BakedGood::ToString();
   return newString;
}
double Bread::DiscountedPrice(int numItems) {
   //Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.
   double total = 0;
   total = (numItems * basePrice) - (numItems / 3 * basePrice);
   return total;
}