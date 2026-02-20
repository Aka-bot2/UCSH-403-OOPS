#include<iostream>
using namespace std;

class Pair{
    int cp=0,ip=0,proj=0;

    public:
        void getinput()
            {
             cout<<"Enter the marks of career peformance, interview performance and projects: ";
             cin>>cp>>ip>>proj;
            }
        void checkEligibility(Pair p1, Pair p2)
            {
             Pair p3;
             p3.cp=p1.cp+p2.cp;
             p3.ip=p1.ip+p2.ip;
             p3.proj=p1.proj+p2.proj;
             
             cout<<"Their total was "<<p3.cp<<"cp +"<<p3.ip<<"ip +"<<p3.proj<<"proj"<<endl;
             if(p3.cp<8||p3.ip<8||p3.proj<8)
                cout<<"Pair is rejected."<<endl;
             else
                cout<<"Pair is selected."<<endl;
            }
};

int main(){
    Pair p1,p2,p3;
    p1.getinput();
    p2.getinput();
    p3.checkEligibility(p1,p2);
}