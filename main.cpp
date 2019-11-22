//
//  main.cpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

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
         cin.ignore();
         for (int i = 0; i < quantity; ++i) {
            //Bread* newBread = new Bread(bakedGoodType, options, quantity);
            //theGoods.push_back(newBread);
         }
      }
      else if (bakedGoodType == "Layer-cake") {
         string cakeFlavor;
         string frostingFlavor;
         int layers;

         cin >> cakeFlavor;
         cin >> frostingFlavor;
         cin >> layers;
         cin.ignore();
         cin >> quantity;
         cin.ignore();
         for (int i = 0; i < quantity; ++i) {
           // LayerCake* newLayerCake = new LayerCake(bakedGoodType, cakeFlavor, frostingFlavor, layers, quantity);
           // newLayerCake->addToPrice(layers);
           // theGoods.push_back(newLayerCake);
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
         cin.ignore();
         for (int i = 0; i < quantity; ++i) {
            /*CupCake* newCupCake = new CupCake(bakedGoodType, flavorCake, frostingFlavor, colorSprinkles, quantity);
            if (frostingFlavor == "cream-cheese") {
               newCupCake->addToPrice(.20);
            }
            theGoods.push_back(newCupCake); */
         }
      }
   }
   cout << "Order Confirmations:" << endl;
   for (int i = 0; i < theGoods.size(); ++i) {
      theGoods.at(i)->ToString();
   }

   cout << "Invoice:" << endl;
   cout << "Baked Good" << endl;
   cout << "Total" << endl;

 
   return 0;
}
