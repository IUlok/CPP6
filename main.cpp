#include "Array.h"
#include <iostream>

using namespace std;
int main()
{
    cout<<" Enter the number of items"<<endl;
    int x;
    cin>>x;
    CArray <1,int> array;
    for (int i=0;i<x;i++){
       cin>> array[i];
    }
    cout<<"Array:"<<endl;
    for (int i=0;i<x;i++){
        cout << array[i] << endl;
    }
}
