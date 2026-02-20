/*AUM SRI SAIRAM
Test-1
A small clinic needs a billing system for patients. The system should handle one patient at a time and track medical expenses like medicines and tests. 
The clinic wants to automatically keep track of total earnings from all patients across different billing sessions.
Your task: Write a C++ program using (classes and objects, inline functions, STATIC, DMA and cin/cout) that:
	•	Stores patient name and dynamically allocates memory for bill item names
	•	Allows adding multiple bill items (name, quantity, rate)
	•	Calculates and displays the patient's total bill
	•	Automatically updates and shows the clinic's total revenue from all bills


*/

#include<iostream>
using namespace std;

class Bill{

    string name[100]={};
    string patient_name;
    int quantity[100]={},rate[100]={},total=0,i=0;

    public:
        static int revenue;
        void input();
        void add_items();
        void total_bill();
        void print_bill();

};

int Bill:: revenue=0;

        void Bill::input()
            {
             cout<<"Enter your name: ";
             cin>>patient_name;
            }
        void Bill:: add_items()
            {
             cout<<"Enter the name, quantity and rate of the item: ";
             cin>>name[i]>>quantity[i]>>rate[i];
             i++;
            }
        void Bill :: total_bill()
            {
             int j=0;
             while(j<i)
                {
                 total=total+quantity[j]*rate[j];
                 j++;
                }
             revenue=revenue+total;
            }
        void Bill:: print_bill()
            {
             int j=0;
             cout<<"Your items are :"<<endl<<endl;
             cout<<"_________________________________________________"<<endl;
             cout<<"|Item Name| "<<"|Quantity| "<<"|Rate| "<<"|Total| "<<endl;
             while(j<i)
                {
                 cout<<"|"<<name[j]<<" "<<quantity[j]<<" "<<rate[j]<<" "<<quantity[j]*rate[j]<<"|"<<endl;
                 j=j+1;
                }
             cout<<"_________________________________________________"<<endl<<endl;
             total_bill();
             cout<<patient_name<<", your total is "<<total<<endl<<endl;
            }


int main()
    {
     Bill *p1= new Bill();

     p1->input();
     p1->add_items();
     p1->add_items();
     p1->print_bill();

     Bill *p2=new Bill();
     p2->input();
     p2->add_items();
     p2->print_bill();

     cout<<"The revenue by the clinic till now is "<<Bill::revenue<<endl;

     delete p1;
     delete p2;
    }