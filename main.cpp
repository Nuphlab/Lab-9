#include "BakedGood.h"
#include "Bread.h"
#include "LayerCake.h"
#include "CupCake.h"
#include "BakedGood.h"
#include "Bread.h"
#include "Cake.h"
#include "LayerCake.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
   vector<BakedGood*> theGoods;
   cout << "**Bread and Cakes Bakery**" << endl << endl;
   cout << "Enter sub-order (enter \"done\" to finish)" << endl;

   string userSelection = "";
   while (userSelection != "done") {
      string options = "";
      int quantity = 0;
      string bakedGoodType = "";

      cout << "Sub-order:" << endl;
      cin >> bakedGoodType;
      userSelection = bakedGoodType;

      if (bakedGoodType == "Bread") {
         cin >> options;
         cin >> quantity;
         for (int i = 0; i < quantity; ++i) {
            Bread* newBread = new Bread(options, quantity);
            theGoods.push_back(newBread);
         }
      }
      else if (bakedGoodType == "Layer-cake") {
         string cakeFlavor;
         string frostingFlavor;
         int layers;

         cin >> cakeFlavor;
         cin >> frostingFlavor;
         cin >> layers;
         cin >> quantity;
         for (int i = 0; i < quantity; ++i) {
            LayerCake* newLayerCake = new LayerCake(cakeFlavor, frostingFlavor, layers, quantity);
            newLayerCake->addToPrice(layers);
            theGoods.push_back(newLayerCake);
         }
      }
      else if (bakedGoodType == "Cupcake") {
         string flavorCake;
         cin >> flavorCake;
         string frostingFlavor;
         cin >> frostingFlavor;
         string colorSprinkles;
         cin >> colorSprinkles;
         cin >> quantity;
         for (int i = 0; i < quantity; ++i) {
            CupCake* newCupCake = new CupCake(flavorCake, frostingFlavor, colorSprinkles, quantity);
            if (frostingFlavor == "cream-cheese") {
               newCupCake->addToPrice(.20);
            }
            theGoods.push_back(newCupCake);
         }
      }
   }
   cout << "Order Confirmations:" << endl;
   for (int i = 0; i < theGoods.size(); ++i) {
      cout << theGoods.at(i)->ToString() << endl;
   }

   cout << "Invoice:" << endl;
   cout << "Baked Good" << setw(65) << "Quantity" << setw(5) << "Total" << endl;

   vector<BakedGood*> invoiceVector;
   vector<BakedGood*> tempInvoiceVector;
   vector<BakedGood*> tempVec;
   vector<BakedGood*> tempObj;
   vector<int> numItems;
   invoiceVector = theGoods;
   tempInvoiceVector = theGoods;
   double totalPrice = 0.00;
   int totalItems = 0;

   for (int i = 0; i < invoiceVector.size(); ++i) {
      int items = 0;
      i = 0;
      for (int j = 0; j < tempInvoiceVector.size(); ++j) {
         if (invoiceVector.at(i)->ToString() == tempInvoiceVector.at(j)->ToString()) {
            tempInvoiceVector.erase(tempInvoiceVector.begin() + j);
            ++items;
            j = 0;
            --j;
         }
      }

      numItems.push_back(items);
      tempObj.push_back(invoiceVector.at(i));

      for (int i = 0; i < invoiceVector.size(); ++i) {
         if (tempObj.at(0)->ToString() == invoiceVector.at(i)->ToString()) {
            invoiceVector.erase(invoiceVector.begin() + i);
            i = 0;
            --i;
         }
      }
      tempVec.push_back(tempObj.at(0));
      tempObj.clear();
   }

   invoiceVector = tempVec;

   for (int i = 0; i < invoiceVector.size(); ++i) {
      cout << invoiceVector.at(i)->ToString() << setw(65) << numItems.at(i) << "    " << fixed << setprecision(2) << invoiceVector.at(i)->DiscountedPrice(numItems.at(i)) << endl;
      totalPrice += invoiceVector.at(i)->DiscountedPrice(numItems.at(i));
      totalItems += numItems.at(i);
   }

   cout << "Totals" << setw(65) << totalItems << "   " << totalPrice << endl;
   cout << "Good Bye";

   //system("pause");
   return 0;
}