#include <iostream>
using namespace std;

struct array {
    int *A;
    int length;
    int size;   
};

void find_missing(array a){
    int diff= a.A[0]-0;
    for (int i=0;i<a.length;i++){
        if(a.A[i]-i>diff){
                cout<<(diff+i)<<" ";
                diff++;
        }
    }
}

void Disp(array a){
    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int n;
    struct array a;
    cout<<"Enter the size of the array:"<<endl;
    cin>>a.size;
    a.A=new int[a.size];
    cout<<"Enter the number of the elements:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a.A[i];
    }
    a.length=n;
    cout<<"Array:"<<endl;
    Disp(a);
    find_missing(a);

    delete[]a.A;
    return 0;
}