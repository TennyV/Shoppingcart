#include<iostream>
#include<string>
#include "ItemToPurchase.h"

using namespace std;

int main()

{
     ItemToPurchase firstItem, secondItem;  // object in class

     string itemName;

     int itemPrice;    // types of integers for today's lab

     int itemQuantity;

     int totalCost;

     cout << "Item 1:" << endl;

     cout << "Enter the item name : " << endl;   // first two things that pop up on screen

     getline(cin, itemName);   // taking input of the line

     cout << "Enter the item price : " << endl;    //display

     cin >> itemPrice;   // input of price

     cout << "Enter the item quantity : " << endl;  // display

     cin >> itemQuantity;

     firstItem.SetName(itemName);

     firstItem.SetPrice(itemPrice);

     firstItem.SetQuantity(itemQuantity);

     cin.ignore();

     cout << endl;

     cout << "Item 2:" << endl;

     cout << "Enter the item name : " << endl;

     getline(cin, itemName);

     cout << "Enter the item price : " << endl;

     cin >> itemPrice;

     cout << "Enter the item quantity : " << endl;

     cin >> itemQuantity;

     secondItem.SetName(itemName);

     secondItem.SetPrice(itemPrice);

     secondItem.SetQuantity(itemQuantity);

    // output

     cout << "TOTAL COST : " << endl;

     cout << firstItem.GetName() << " " << firstItem.GetQuantity() << " @ $" << firstItem.GetPrice() << " = " << (firstItem.GetQuantity()*firstItem.GetPrice()) << endl;

     cout << secondItem.GetName() << " " << secondItem.GetQuantity() << " @ $" << secondItem.GetPrice() << " = " << (secondItem.GetQuantity()*secondItem.GetPrice()) << endl;

     totalCost = (firstItem.GetQuantity()*firstItem.GetPrice()) + (secondItem.GetQuantity()*secondItem.GetPrice());

     cout << endl;

     cout << "Total : $" << totalCost << endl;

     return 0;

}
