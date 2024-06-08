#include <iostream>
using namespace std;

struct Rect{
    int length;
    int breadth;
};

void func(struct Rect *p){
    // call by adress changes the original value
    p->length=20;
    cout<<"Area:"<<p->length*p->breadth<<endl;
}

int main(){
    struct Rect r;
    cout<<"Enter the length and breadth: "<<endl;
    cin>>r.length>>r.breadth;
    cout<<"Area:(w/o function)"<<r.length*r.breadth<<endl;
    func(&r);

    return 0;
}