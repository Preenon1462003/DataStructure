#include <iostream>
using namespace std;
struct Rect{
    int length;
    int breadth;
};
struct Rect *func(){
    struct Rect *p;
    p=new Rect;
    p->length=15;
    p->breadth=6;
}
int main(){
    struct Rect *ptr=func();
    cout<<"Lenght:"<<ptr->length<<" Breadth:"<<ptr->breadth;
    return 0;
}