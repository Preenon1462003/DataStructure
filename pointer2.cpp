#include <iostream>
using namespace std;
int main(){
    int *p;
    int a[5]={2,3,4,5,6};
    p=a;
    for (int i=0;i<5;i++){
        cout<<p[i]<<endl; //pointer can be used as array name 
    }

    return 0;
}