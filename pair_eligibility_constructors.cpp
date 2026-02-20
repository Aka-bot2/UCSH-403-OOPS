#include<iostream>
using namespace std;

class Pair{
    double cp=0,ip=0,proj=0;

    public:
        Pair(double i,double j,double k)
            {
             cp=i,ip=j,proj=k;
            }
        void checkEligibility(Pair p1, Pair p2)
            {
             Pair p3(0.00,0.00,0.00);
             p3.cp=p1.cp+p2.cp;
             p3.ip=p1.ip+p2.ip;
             p3.proj=p1.proj+p2.proj;
             
             cout<<"Their total was "<<p3.cp<<"g +"<<p3.ip<<"P +"<<p3.proj<<"I"<<endl;
             if(p3.cp<150||p3.ip<180||p3.proj<9)
                cout<<"Pair is rejected."<<endl;
             else
                cout<<"Pair is selected."<<endl;
            }
};

int main(){
    double i=0,j=0,k=0;
    while((i<60||i>99)||(j<60||j>99)||(k<0||k>10))
        {
        cout<<"Enter scores of candidate one: ";
        cin>>i>>j>>k;}
    Pair p1(i,j,k);
    i=0,j=0,k=0;
    while((i<60||i>99)||(j<60||j>99)||(k<0||k>10))
        {
        cout<<"Enter scores of candidate two: ";
        cin>>i>>j>>k;}
    Pair p2(i,j,k),p3(0.00,0.00,0.00);
    p3.checkEligibility(p1,p2);
}