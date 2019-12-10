#include "CupCake.h"

CupCake::CupCake() {
}
CupCake::CupCake(string typeOfCake, string flavorCake, string frostingFlavor, string colorSprinkles, int quantity) :
   Cake(flavorCake, frostingFlavor, BASE_CUPCAKE_PRICE, typeOfCake, quantity) {
   //cakeType = bakedGoodType;
   //itemQuantity = quantity;
   sprinklesColor = colorSprinkles;
   totalCupCakeQuantity += quantity;
}
void CupCake::addToPrice(double price) {
   basePrice += price;
}
string CupCake::ToString() {
   //Returns a string containing the basic description and base price of the object.
   string newString;
   newString = Cake::cakeFlavor + " " + "cupcake" + " with " + Cake::frostingFlavor + " frosting and " + sprinklesColor + " sprinkles " + BakedGood::ToString();//($" + to_string(basePrice) + ")";
   return newString;
}
double CupCake::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   double total = 0.0;
   double discountRate = 0.00;
   if (totalGoods >= 4) {
      discountRate = .40;
   }
   else if (totalGoods >= 2 && totalGoods < 4) {
      discountRate = .30;
   }

   total = (totalGoods * basePrice) - (totalGoods * discountRate);
   return total;
}
int CupCake::GetQuantity() {
   return cakeQuantity;
}

int CupCake::GetTotalQuantity() {
   return totalCupCakeQuantity;
}