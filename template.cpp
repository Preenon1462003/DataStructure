#include <iostream>
using namespace std;

class Ar{
    int a,b;

    public:
    Ar(int a, int b){
        this->a=a;
        this->b=b;
    }
    int add(){
        int c;
        c=a+b;
        return c;
    }
    int sub(){
        int c;
        c=a-b;
        return c;
    }
};

int main(){
    Ar ar(10,5);
    int add1=ar.add();
    int sub1=ar.sub();

    cout<<"Addition:"<<add1<<"\tSubtraction:"<<sub1<<endl;

    return 0;
}