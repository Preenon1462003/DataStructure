#include <iostream>
using namespace std;

class Rectangle{
    private:
    int lenght;
    int breadth;
    public:
    //Constructors are functions
    //Constructors have the same name as the class 
    //It is used in case of automatic initialization of data to the variables in main function
    Rectangle(int l, int b){
        lenght=l;
        breadth=b;
    }
    void area(){
        cout<<"Area:"<<lenght*breadth<<endl;
    }
    void change(int l){
        lenght=l;
    }
};

int main(){
   Rectangle r(10,5);
   cout<<"Before changing the value:"<<endl;
   r.area();
   r.change(5);
   cout<<"After changing the value:"<<endl;
   r.area();

   return 0;
}