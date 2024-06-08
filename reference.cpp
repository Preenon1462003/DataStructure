#include <iostream>
using namespace std;
int main(){
    int a=10;
    int &r=a;
    r++;
    cout<<a<<endl;
    int b=25;
    r=b;
    cout<<a<<endl;
    return 0;
}