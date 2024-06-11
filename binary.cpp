/*
For binary search it is necessary to provide a sorted array
*/
#include <iostream>
using namespace std;

struct array
{
    int *A;
    int length;
    int size;
};
void Disp(struct array ar)
{
    int i;
    cout << "Elements in the array:" << endl;
    for (int i = 0; i < ar.length; i++)
    {
        cout << ar.A[i] << " ";
    }
    cout << endl;
}

int bs(struct array ar, int l, int h,int num)
{
    int m;
    if (l <= h)
    {
        m = (l + h) / 2;
        if(num==ar.A[m]){
            return m;
        }

        else if(num<ar.A[m]){
            return bs(ar,l,m-1,num);
        }
        
        else{
            return bs(ar,m+1,h,num);
        }
    }
    return -1;
}

int main()
{
    struct array ar;
    int n, i;
    cout << "Enter the size of the array:" << endl;
    cin >> ar.size;
    ar.A = new int[ar.size];
    cout << "Enter the number of elements:" << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar.A[i];
    }
    ar.length = n;
    Disp(ar);
    int binary=bs(ar,0,ar.length,6);
    cout<<"ELement found in index number:"<<binary+1<<endl;
    delete[] ar.A;

    return 0;
}