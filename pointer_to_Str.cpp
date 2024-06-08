#include <iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main(){
    // creating object of the structure in heap 
    Rectangle *p;
    //p=(struct Rectangle*)malloc(sizeof(Struct Rectangle)) in case of c
    p = new Rectangle;
    p->length=13;
    p->breadth=8;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}