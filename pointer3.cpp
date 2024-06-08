// Creating data-memory in heap
#include <iostream>
using namespace std;
int main(){
    int *p;
    p=new int(5);
    cout<<"Enter the value"<<endl;
    //array creation in Heap memory
    for (int i =0;i<5;i++){
       cin>>p[i]; 
    }
    cout<<"The values are:"<<endl;
    for (int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }

    delete[]p;
    return 0;
}