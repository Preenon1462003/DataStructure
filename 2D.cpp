#include <iostream>
using namespace std;
int main(){
    int **A;
    int n;
    cout<<"Specify the size"<<endl;
    cin>>n;
    A= new int *[n];
    int m;
    cout<<"Specify the second dimension"<<endl;
    cin>>m;
    for(int i=0;i<n;i++){
        A[i]=new int[m];
    }
    cout<<"Enter the data"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    cout<<"DATA:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        delete[]A[i];
    }
    delete[]A;

    return 0;

}