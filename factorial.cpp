#include <iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        return fact(n+1)*n;
    }
    return fact(n-1)*n;
}
int main(){
    int r;
    r=fact(-2);
    cout<<r;
    return 0;
}