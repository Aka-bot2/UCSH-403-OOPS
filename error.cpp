
#include<iostream>

using namespace std;

class teststa{

                static int a;

                public:
                
                static void set(int k){
                    a=k;
                }
                void show(){
                    cout<<"The non-static variable is:"<< a<<endl;
                }             
};

int teststa::a;

int main(){

                teststa ob;

                ob.set(5);

                ob.show(); //display

                return 0;              

}




/*#include<iostream>

using namespace std;

class teststa{

                int a;

                public:
                
                void set(int k){
                    a=k;
                }
                void show(){
                    cout<<"The non-static variable is:"<< a<<endl;
                }             
};

int main(){

                teststa ob;

                ob.set(5);

                ob.show(); //display

                return 0;              

}*/