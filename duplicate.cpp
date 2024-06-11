#include <iostream>
using namespace std;

struct array {
    int *A;
    int length;
    int size;
};
void dup(array a){
    int dup =0;
    for(int i=0;i<a.length-1;i++){
        if(a.A[i]==a.A[i+1] && a.A[i]!=dup){
            cout<<a.A[i];
            dup=a.A[i];
        }
    }
}

int count(array a){
    for(int i=0;i<a.length-1;i++){
        if(a.A[i]==a.A[i+1]){
           int j=i+1;
           while(a.A[i]==a.A[j]){
            j++;
           }
            cout << "Element " << a.A[i] << " appears " << j - i << " times." << endl;
            i=j-1;
        }
    }


}
void Disp(array a)
{
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
    cout<<"Enter the number of elements:"<<endl;
    cin>> n;
    for(int i=0;i<n;i++){
        cin>>a.A[i];
    }
    a.length=n;
    Disp(a);
    dup(a);
    cout<<endl;
    count(a);
    delete[]a.A;
    return 0;

}