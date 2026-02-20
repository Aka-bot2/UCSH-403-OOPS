#include<iostream>
using namespace std;

class bill{
    private:
        int reg_no,i=0,j=0,k=0,l=0;
        int breakfast[366]={},lunch[366]={},dinner[366]={},special[366]={};
    public:
        static int total_expense;
        void get_id()
            {
             cout<<"Enter registration no: ";
             cin>>reg_no;
            }
        void bf_bill()
            {
                cout<<"Enter breakfast expense: ";
                cin>>breakfast[i];
                total_expense=total_expense+breakfast[i];
                cout<<"Your breakfast expense was "<<breakfast[i]<<endl;
                i++;
            }
        void lunch_bill()
            {
                cout<<"Enter lunch expense: ";
                cin>>lunch[j];
                total_expense=total_expense+lunch[j];
                cout<<"Your spent "<<lunch[j]<<" on your lunch"<<endl;
                j++;
            }
        void dinner_bill()
            {
                cout<<"Enter your dinner expense: ";
                cin>>dinner[k];
                total_expense=total_expense+dinner[k];
                cout<<"Your spent "<<dinner[k]<<" on your dinner"<<endl;
                k++;
            }
        void special_bill()
            {
                cout<<"Enter your special expense: ";
                cin>>special[l];
                total_expense=total_expense+special[l];
                cout<<"Your spent "<<special[l]<<" on your special items"<<endl;
                l++;
            }
};

int bill::total_expense=0;

int main()
    {
     bill * ptr1 = new bill();
     ptr1->get_id();
     ptr1->bf_bill();
     ptr1->lunch_bill();
     bill * ptr2 = new bill();
     ptr2->get_id();
     ptr2->dinner_bill();
     ptr2->special_bill();

     cout<<"The total expense is "<<bill::total_expense<<endl;
     delete ptr1;
     delete ptr2;
    }