#include <iostream>
using namespace std;
int * fun(int size){
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;
}
int main(){
    int *ptr, size=5;
    ptr=fun(size);
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
        
    }
}