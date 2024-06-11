// Array is a collection of similar data elements 
/*
int a[5]-> All garbage values
int a[5]->{1,2,3,4,5}
int a[]->{1,2,3,4,5}
int a[5]->{2,4} rest spaces are filled with 0
int a[5]->{0} all values will be 0

Static Array: created inside stack and size of the array is decided at compile time
eg: int a[5] This is compulsory in C
int n;
cin>>n;
int b[n]; 
though it is not static but the size is decided during runtime
Dynamic Array :
int *p;
p=new int(5);
Or, in C
p= (int *) malloc(5*(sizeof(int)))

*/

//Increasing Array size dynamically

#include <iostream>
using namespace std;
int main(){
    int *p=new int[5];
    cout<<"Enter the values:"<<endl;
    for(int i=0;i<5;i++){
        cin>>p[i];
    }

    // Increasing the size

    int *q = new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }

     delete[] p;
        p=q;
        q=nullptr;
    cout<<"OUTPUT:"<<endl;
    for(int i=0;i<5;i++){
        
        cout<<p[i]<<" ";
    }

    delete[] p;
    return 0;


}