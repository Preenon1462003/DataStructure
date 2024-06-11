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
void append(array *a1, array *a2)
{
    if (a1->size < a1->length + a2->length)
    {
        int newSize = a1->length + a2->length;
        int *newArray = new int[newSize];

        for (int i = 0; i < a1->length; i++)
        {
            newArray[i] = a1->A[i];
        }
        delete[] a1->A;
        a1->A = newArray;
        a1->size = newSize;
    }
    for (int i = 0; i < a2->length; i++)
    {
        a1->A[i + a1->length] = a2->A[i];
    }

    a1->length += a2->length;

    Disp(*a1);
}

int main()
{
    int n1, n2;
    struct array a;
    cout << "Enter the size of first the array:" << endl;
    cin >> a.size;
    a.A = new int[a.size];
    cout << "Enter the number of elements:" << endl;
    cin >> n1;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> a.A[i];
    }

    struct array b;
    cout << "Enter the size of second the array:" << endl;
    cin >> b.size;
    b.A = new int[b.size];
    cout << "Enter the number of elements:" << endl;
    cin >> n2;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> b.A[i];
    }

    a.length = n1;
    b.length = n2;
    cout << "A:" << endl;
    Disp(a);
    cout << "B:" << endl;
    Disp(b);
    cout << "Append:" << endl;
    append(&a, &b);

    delete[] a.A;
    delete[] b.A;
    return 0;
}