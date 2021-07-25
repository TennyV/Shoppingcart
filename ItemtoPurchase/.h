#define ITEMTOPURCHASE_H_INCLUDED
#include<string>
#include <iostream>

using namespace std;

class ItemToPurchase

{

public:

     ItemToPurchase();   // default constructor

     void SetName(string ItemName);  // setName function


     void SetPrice(int itemPrice);  // establishes the price


     void SetQuantity(int itemQuantity);  // sets the quantity

     string GetName();  // gets the name

     int GetPrice();  // Getprice function

     int GetQuantity();

private:

     string itemName;   // item names is a string

     int itemPrice;  // price of items is an integer

     int itemQuantity;  // quantity of item is an Integer

};

