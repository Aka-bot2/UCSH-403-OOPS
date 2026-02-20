#include<iostream>

using namespace std;

class CC{

                  int i;

                public:

               CC(int k)

                                                                 {

                                                                        i=k;

                                                                 }

                                 CC (const CC &sai){// copy constructor

                                                                        i=sai.i;

                                                                 }

               int getI(){

                                                            return i;

                     }

                    

};

int main(){

              CC c1(6);

cout<<"The address of 1st object is  "<< &c1<<endl;

CC c2=c1;// calling the copy constructor and working on stacks calleed as shallow copy

cout<<"The address of 2nd object is  "<< &c2<<endl;

     cout<<c1.getI()<<endl;

     cout<<c2.getI()<<endl;

}