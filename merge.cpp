#include <iostream>
using namespace std;

struct array{
    int *A;
    int length;
    int size; 
};

void concat(array a1,array a2,array *a3){
    a3->size=a1.length+a2.length;
    a3->length=a3->size;
    a3->A=new int[a3->size];
    for(int i=0;i<a1.length;i++){
        a3->A[i]=a1.A[i];
    }
    for (int j=0;j<a2.length;j++){
        a3->A[j+a1.length]=a2.A[j];
    }
}

void Disp(array a){
    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n1,n2;
    struct array a;
    cout<<"Enter the size of first the array:"<<endl;
    cin>>a.size;
    a.A=new int [a.size];
    cout<<"Enter the number of elements:"<<endl;
    cin>>n1;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a.A[i];
    }

    struct array b;
    cout<<"Enter the size of second the array:"<<endl;
    cin>>b.size;
    b.A=new int [b.size];
    cout<<"Enter the number of elements:"<<endl;
    cin>>n2;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n2;i++){
        cin>>b.A[i];
    }

    a.length=n1;
    b.length=n2;

    struct array c;

    cout<<"1st Array:"<<endl;
    Disp(a);
    cout<<"2nd Array:"<<endl;
    Disp(b);
    cout<<"After concatenation:"<<endl;
    concat(a,b,&c);
    Disp(c);

    delete[]a.A;
    delete[]b.A;
    delete[]c.A;

    return 0;
    
}