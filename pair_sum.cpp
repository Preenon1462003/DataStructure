#include <iostream>
using namespace std;

struct array
{

    int *A;
    int length;
    int size;
};

void Pair(array ar, int num)
{
    struct array hash;
    int max = ar.A[0];
    for (int i = 1; i < ar.length; i++)
    {
        if (ar.A[i] > max)
        {
            max = ar.A[i];
        }
    }
    hash.size = max + 1;
    hash.length = hash.size;
    hash.A = new int[hash.size]{0};
    for (int i = 0; i < ar.length; i++)
    {
        if (num - ar.A[i] > 0 && num - ar.A[i] < hash.size && hash.A[num - ar.A[i]] != 0)
        {
            cout << ar.A[i] << "+" << num - ar.A[i] << "=" << num << endl;
        }
        hash.A[ar.A[i]]++;
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
    struct array a;
    int n;
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
    Pair(a, 10);

    delete[] a.A;
    return 0;
}