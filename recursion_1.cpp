#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
    }
}
void fun3(int n){
    if(n>0){
        fun3(n-1);
        cout<<n<<endl;
    }

}
int main(){
    int n=4;
    fun(n);
    cout<<"Reverse"<<endl;
    fun3(n);
}  