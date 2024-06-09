#include <iostream>
using namespace std;
int fact (int n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        return fact(n+1)*n;
    }
    return fact(n-1)*n;
}
int C(int n,int r){
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(n-r);
    t3=fact(r);

    return t1/(t2*t3);
}
int main(){

    int n,r;
    cout<<"Enter the values:"<<endl;
    cin>>n>>r;
    int combination = C(n,r);
    cout<<"Combination:"<<combination<<endl;
    return 0;

}