#include <iostream>
using namespace std;

struct Rect{
    int length;
    int breadth;
};

 void fun(struct Rect r){
    //in case of call by value actual value will not be replaced permanently
    r.length=20;
    cout<<"Area:"<<r.length*r.breadth<<endl;
 }
int main(){
    struct Rect r1;
    cout<<"Enter the length:"<<endl;
    cin>>r1.length;
    cout<<"Enter the breadth:"<<endl;
    cin>>r1.breadth;
    fun(r1);
    cout<<"Area:(w/o function)"<< r1.length*r1.breadth<<endl;

    return 0;
}