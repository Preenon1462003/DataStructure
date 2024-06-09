#include <iostream>
using namespace std;
double fact(int n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        return fact(n+1)*n;
    }
    return fact(n-1)*n;
}
 double pow(int m, int n) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 1.0 / (pow(m, -n));
    }
    return pow(m, n - 1) * m;
}
double taylor(int x, int n){
    if(n==0){
        return 1;
    }
    return (pow(x,n)/fact(n))+taylor(x,n-1);
}
int main(){
    double t= taylor(2,5);
    cout<<t;
    return 0;
}