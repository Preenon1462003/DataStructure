//get,set,max,min,avg
#include <iostream>
using namespace std;

struct array{
    int *A;
    int length;
    int size;
};
void swap(int *x,int *y ){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void Disp(struct array &ar)
{
    int i;
    cout << "Elements in the array:" << endl;
    for (int i = 0; i < ar.length; i++)
    {
        cout << ar.A[i] << " ";
    }
}

 int get(struct array ar, int index){
    if(index>=0 && index<=ar.length){
        return (ar.A[index]);
    }
    return -1;
}

void set(struct array *ar, int index,int x){
    if(index>=0 && index<=ar->length){
        ar->A[index]=x;
    }
    
}

int maximum(struct array ar){
    int max=ar.A[0];
    for(int i= 1;i<ar.length;i++){
        if(ar.A[i]>max){
            max=ar.A[i];
        }
    }
    return max;
}

int minimum(struct array ar){
    int min=ar.A[0];
    for(int i= 1;i<ar.length;i++){
        if(ar.A[i]<min){
            min=ar.A[i];
        }
    }
    return min;
}

int summation(struct array ar){
    int sum=0;
    for(int i= 0;i<ar.length;i++){
        sum+=ar.A[i];
    }
    return sum;


    /*Recursive way:
    in that case parameters: int summation(struct array ar , h)
        if(h<0){
            return 0;
        }
        else{
            return summation(ar,h-1)+ar.A[n];
        }
    */
}

float average(struct array ar){
    float sum=0;
    for(int i= 0;i<ar.length;i++){
        sum+=ar.A[i];
    }

    float avg= (sum/ar.length);
    return avg;
}

void reverse(struct array *ar){
    int i,j;
    for(int i=0,j=ar->length-1;i<j;i++,j--){
        swap(&ar->A[i],&ar->A[j]);
    }
    cout<<"After reversing:"<<endl;
    Disp(*ar);
}

int main(){
    int n;
    struct array ar;
    cout<<"Enter the size of the array:"<<endl;
    cin>>ar.size;
    ar.A=new int[ar.size];
    cout<<"Enter the number of the elements:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>ar.A[i];
    }
    ar.length=n;
    Disp(ar);
    int g=get(ar,3);
    cout<<"\nGetting value of 3rd index:"<<g<<endl;
    set(&ar,3,8);
    cout<<"After setting new value:"<<endl;
    Disp(ar);
    int m=maximum(ar);
    cout<<"\nMaximum value in the array:"<<m<<endl;
    int n1=minimum(ar);
    cout<<"Minimum value in the array:"<<n1<<endl;
    int sum=summation(ar);
    cout<<"Summation:"<<sum<<endl;
    float av=average(ar);
    cout<<"Average:"<<av<<endl;
    reverse(&ar);
    delete[]ar.A;
    return 0;
}