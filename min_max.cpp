#include <iostream>
using namespace std;
struct array
{
    int *A;
    int length;
    int size;
};

void mm(array ar){
    int min = ar.A[0];
    int max = ar.A[0];

    // Iterate through the array starting from the second element
    for (int i = 1; i < ar.length; i++) {
        if (ar.A[i] < min) {
            min = ar.A[i];
        }
        if (ar.A[i] > max) {
            max = ar.A[i];
        }
    }
}

void disp(array a) {
    for (int i = 0; i < a.length; i++) {
        cout << a.A[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    struct array a;
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

    cout << "Array:" << endl;
    disp(a);

    int min, max;
    mm(a);

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    // Free the memory allocated for the input array
    delete[] a.A;

    return 0;
}
