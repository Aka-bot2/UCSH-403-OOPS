#include <iostream>

using namespace std;

int main()
    {
        int arr [2][2]={{1,2},{3,4}};
        int i =0,j=0;
        while(i<2)
            {
                j=0;
                while(j<2)
                    {
                        cout<<arr[i][j]<<" ";
                        j++;
                    }
                cout<<endl;
                i++;
            }
    }