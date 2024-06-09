#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
    cout<<n<<endl;
    fun(n-1);

    //[fun(n-1)+n] not a tail recursion
    //as n is to be added at the returning time 
    /*
    Loop Vs Tail Recursion:
    now the matter is loop and tail recursion are both inter-convertable 
    but which one is preferable? so we can say that time taken by loop and 
    tail recursion is same but the space complexity differs...
    tail recursion creates stack instances so space complexity is O(n)
    but in case of loop the space complexity is O(1)
    loop >> tail recursion
    */

    }
}
int main(){
    fun(5);
    return 0;
}