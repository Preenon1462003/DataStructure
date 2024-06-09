#include <iostream>
using namespace std;
int sum(int n){
    if(n>0){
        return n+sum(n-1);
    }
}

int main(){
    int result;
    result = sum(5);
    cout<<result<<endl;
    return 0;
}