#include <iostream>
using namespace std;

struct Rect{
    int length;
    int breadth;
};

void initialize(struct Rect *r, int l, int b){
    r->length=l;
    r->breadth=b;
    cout<<"Lenght:"<<r->length<<"\nBreadth:"<< r->breadth<<endl;
}
void area(struct Rect r){
    cout<<"Area:"<< r.length*r.breadth<<endl;
}

void change (struct Rect *r,int l){
    r->length=l;
    cout<<"New length:"<<r->length<<endl;
}

int main(){
    struct Rect r;
    initialize(&r,10,25);
    area(r);
    change(&r,5);
    cout<<"New area:"<<endl;
    area(r);

    return 0;
}