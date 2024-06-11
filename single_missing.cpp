// Single missing number
#include <iostream>
using namespace std;

struct array
{

    int *A;
    int length;
    int size;
};

void Disp(array a)
{
    for (int i = 0; i < a.length; i++)
    {
        cout << a.A[i] << " ";
    }
    cout << endl;
}

int find_missing(array a)
{
    int sum = 0;
    for (int i = 0; i < a.length; i++)
    {
        sum += a.A[i];
    }
     int n = a.length + 1; // The actual number of elements should be length + 1
    int expected_sum = (n * (n + 1)) / 2;
    int missing= expected_sum-sum;
    return missing;
}

int main()
{
    struct array a;
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> a.size;
    a.A = new int[a.size];
    cout << "Enter the number of elements:" << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a.A[i];
    }
    a.length = n;
    cout << "Array:" << endl;
    Disp(a);

    int miss = find_missing(a);
    cout << "Missing Element:" << miss << endl;

    delete[] a.A;

    return 0;
}