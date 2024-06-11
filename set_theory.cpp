#include <iostream>
using namespace std;

struct array {
    int *A;
    int length;
    int size;
};

void Disp(array a){
    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }
    cout<<endl;
}

void merge(array*a,int l,int mid,int h){

    int n1= mid-l+1;
    int n2=h-mid;

    int *L=new int[n1];
    int *R=new int[n2];

    for(int i=0;i<n1;i++){
        L[i]=a->A[l+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=a->A[mid+1+j];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a->A[k]=L[i];
            i++;
        }
        else{
            a->A[k]=R[j];
            j++;
        }
        k++;
    }
    
    while(i<n1){
        a->A[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a->A[k]=R[j];
        j++;
        k++;
    }

    delete[]L;
    delete[]R;

}

void sort(array*a,int l,int h){

    if(l<h){
        int mid= l+(h-l)/2;

        sort(a,l,mid);
        sort(a,mid+1,h);
        merge(a,l,mid,h);
    }


}

void intersection(array *a,array *b,array *c){
    int i=0,j=0,k=0;
    sort(a,0,a->length-1);
    sort(b,0,b->length-1);

    c->size=a->length+b->length;
    c->A=new int[c->size];
    c->length=0;

    while(i<a->length && j<b->length){
        if(a->A[i]<b->A[j]){
            i++;
        }
        else if(b->A[j]<a->A[i]){
            j++;
        }
        else{
            c->A[k++]=a->A[i];
            i++;
            j++;
            c->length++;
        }
    }

    Disp(*c);
}

int main(){
    struct array a,b,c;
    int n1,n2;
    cout<<"Enter the size of the first array:"<<endl;
    cin>>a.size;
    a.A=new int[a.size];
    cout<<"Enter the number of elements:"<<endl;
    cin>>n1;
    cout<<"Enter the data:"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a.A[i];
    }
    cout<<"Enter the size of the second array:"<<endl;
    cin>>b.size;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n2;
    cout<<"Enter the data:"<<endl;
    for(int i=0;i<n2;i++){
        cin>>b.A[i];
    }
    a.length=n1;
    b.length=n2;

    cout<<"A"<<endl;
    Disp(a);
    cout<<"B"<<endl;
    Disp(b);
    cout<<"Intersection"<<endl;
    intersection(&a,&b,&c);

    delete[]a.A;
    delete[]b.A;
    delete[]c.A;

    return 0;
}