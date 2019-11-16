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
   
   string bakedGoodType = "";
   while (bakedGoodType != "done") {
      string options;
      int quantity;
      cout << "Sub-order:" << endl;
      getline(cin, bakedGoodType);
      if (bakedGoodType != "done") {
         if (bakedGoodType == "Bread") {
            getline(cin, options);
            cin >> quantity;
            cin.ignore();
            for (int i = 0; i < quantity; ++i) {
               Bread* newBread = new Bread(bakedGoodType, options, quantity);
               theGoods.push_back(newBread);
            }
         }
         else if (bakedGoodType == "Layer-cake") {
            string cakeFlavor;
            string frostingFlavor;
            int layers;

            getline(cin, cakeFlavor);
            getline(cin, frostingFlavor);
            cin >> layers;
            cin.ignore();
            cin >> quantity;
            cin.ignore();
            LayerCake* newLayerCake = new LayerCake(bakedGoodType, cakeFlavor, frostingFlavor, layers, quantity);
            theGoods.push_back(newLayerCake);
         }
         else if (bakedGoodType == "Cupcake") {
            getline(cin, options);
            cin >> quantity;
            cin.ignore();
            CupCake* newCupCake = new CupCake(bakedGoodType, options, quantity);
            theGoods.push_back(newCupCake);
         }
         
         cout << "Order Confirmations:" << endl;
         for (int i = 0; i < theGoods.size(); ++i) {
            theGoods.at(i)->ToString();
         }
      }
      //cout << "Sub-order:" << endl;
      //getline(cin, bakedGoodType);
   }

   cout << "Good Bye";

    return 0;
}
