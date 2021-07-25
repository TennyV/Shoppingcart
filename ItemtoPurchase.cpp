#include <iostream>
#include <string>
#include "ItemToPurchase.h"

using namespace std;

ItemToPurchase::ItemToPurchase()   //default constructor

{
     itemName = "none";
     itemPrice = 0;
     itemQuantity = 0;
}
void ItemToPurchase::SetName(string name) //SetName function

{
     itemName = name;
}

void ItemToPurchase::SetPrice(int itemPrice)  //SetPrice function

{
     this->itemPrice = itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity) // setQuantity function

{
     this->itemQuantity = itemQuantity;
}

string ItemToPurchase::GetName()  // getName function

{

     return itemName;

}

int ItemToPurchase::GetPrice()  // GetPrice function

{

     return itemPrice;

}

int ItemToPurchase::GetQuantity()  // Get Quantity function

{

     return itemQuantity;

}
