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

using namespace std;

int main() {

   cout << "**Bread and Cakes Bakery**" << endl << endl;
   cout << "Enter sub-order (enter \"done\" to finish)" << endl;
   
   string bakedGood = "";
   while (bakedGood != "done" && ) {
      string options;
      int quantity;
      cout << "Sub-order:" << endl;
      getline(cin, bakedGood);
      getline(cin, options);
      cin >> quantity;
      cin.ignore();
   }

    return 0;
}
