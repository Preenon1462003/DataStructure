#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(n>1){
        return fibo(n-1)+fibo(n-2);
    }
    else{
        cout<<"Invalid";
        return -1;
    }
    
}
void Print(int n){
    if(n>=0){
         Print(n-1);
         cout<<fibo(n)<<" ";
    }
}
int main(){
   Print(5);
 
   return 0;
}