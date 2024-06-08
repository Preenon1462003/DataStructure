#include <iostream>
using namespace std;

class Rect{

    int length;
    int breadth;

    public:
    Rect(){
        length=0;
        breadth=0;
    } 
    Rect(int l, int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return (2*(length+breadth));
    }
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    int getl(){
        return length;
    }
    int getb(){
        return breadth;
    }
    ~Rect(){
        cout<<"Destructor";
    }



};

int main(){
    Rect r(10,5);
    int area1= r.area();
    int peri= r.perimeter();

    cout<<"Area:"<<area1<<endl;
    cout<<"Perimeter:"<<peri<<endl;

    return 0;
}