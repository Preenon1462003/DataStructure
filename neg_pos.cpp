#include <iostream>
using namespace std;

struct array{
    int *A;
    int length;
    int size;
    
};

void swap( int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void negpos(struct array *ar){
    int i,j;
    i=0;
    j=ar->length - 1;
    while(i<j){
    while(ar->A[i]<0){
        i++;
    }
    while(ar->A[j]>0){
        j--;
    }
    if(i<j){
        swap(&ar->A[i],&ar->A[j]);
    }
    }

}

void Disp(struct array ar){
    for(int i=0;i<ar.length;i++){
        cout<<ar.A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    struct array a;
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>a.size;
    a.A=new int[a.size];
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a.A[i];
    }
    a.length=n;
    Disp(a);
    cout<<"Applying...."<<endl;
    negpos(&a);
    cout<<"After application..."<<endl;
    Disp(a);

    delete[]a.A;
    return 0;
}