/*
Problem 1: Shop Inventory System
Design a ShopItem class to model items in a small store inventory system. Use a default constructor to set name to
"Item" and price to 0 while printing "Default item created", and a parameterized constructor taking string name
and int price that prints "Item [name] created". The destructor should print "Item [name] removed". Include a static
int itemCount that increments in constructors and decrements in destructor. Write a member function show() to
display item details and a global function showItem(ShopItem item) that passes object by value and calls show().
Demonstrate with both static objects and dynamic objects using new/delete.
*/

#include<iostream>
using namespace std;

class ShopItem{
    int price=0;
    string name;
        public:

        static int count;
        ShopItem()
            {
             price=0;
             name="Item";
             cout<<"Default item created"<<endl;
             count++;
            }
        ShopItem(int p, string n)
            {
             price=p;
             name=n;
             cout<<"Item "<<name<<" created."<<endl;
             count++;
            }
        void show()
            {
             cout<<"The item is "<<name<<" and it is "<<price<<" rupees only!!!"<<endl;
            }
        ~ShopItem()
            {
             cout<<"Item "<<name<<" removed."<<endl;
             count--;
            }
        
        
};

int ShopItem::count=0;

void showItem(ShopItem a)
    {
     a.show();
    }

int main()
    {
     ShopItem a, b(2,"Choki choki");

     ShopItem *c = new ShopItem();

     cout<<"This is the current count of items: "<<ShopItem::count<<endl;

     showItem(b);

     delete c;
     
    }