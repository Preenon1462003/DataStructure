#include <iostream>
using namespace std;

struct array
{
    int *A;
    int length;
    int size;
};

void duplicate(array ar)
{
    struct array hash;
    int max = ar.A[0];
    for (int i = 0; i < ar.length; i++)
    {
        if (ar.A[i] > max)
        {
            max = ar.A[i];
        }
    }
    hash.size = max + 1;
    hash.length = hash.size;
    hash.A = new int[hash.size]{0}; // initiated all values with 0
    for (int i = 0; i < ar.length; i++)
    {
        hash.A[ar.A[i]]++;
    }
    for (int i = 0; i < hash.length; i++)
    {
        if (hash.A[i] > 1)
        {
            cout << "Element: " << i << " appears: " << hash.A[i] << " times" << endl;
        }
    }
    delete[] hash.A;
}

void disp(array a)
{
    for (int i = 0; i < a.length; i++)
    {
        cout << a.A[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    struct array a;
    cout << "Enter the size of the array:" << endl;
    cin >> a.size;
    a.A = new int[a.size];
    cout << "Enter the number of the elements:" << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a.A[i];
    }
    a.length = n;
    cout << "Array:" << endl;
    disp(a);
    duplicate(a);

    delete[] a.A;
    return 0;
}