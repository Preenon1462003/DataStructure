#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Disp( Array &ar)
{
    int i;
    cout << "Elements in the array:" << endl;
    for (int i = 0; i < ar.length; i++)
    {
        cout << ar.A[i] << " ";
    }
}

void App( Array *ar)
{
    int n;
    cout << "\nHow many elements you want to append:" << endl;
    cin >> n;
    if (ar->length + n <= ar->size)
    {
        for (int i = (ar->length); i < (ar->length + n); i++)
        {
            cin >> ar->A[i];
        }
        ar->length += n;

        cout << "\nAfter Appending the new array:" << endl;
        Disp(*ar);
    }
}

void insert( Array *ar, int index, int num)
{

    if (index >= 0 && index <= ar->length)
    {
        for (int i = ar->length; i > index; i--)
        {
            ar->A[i] = ar->A[i-1];
           

        }
        ar->A[index] = num;
        ar->length++;
    }
}

void del( Array *ar, int index)
{

    int x;
    if (index >= 0 && index < ar->length)
    {
        x = ar->A[index];
        for (int i = index; i < ar->length - 1; i++)
        {
            ar->A[i] = ar->A[i + 1];
        }
        ar->length--;
    }
}

void swap(int *x,int *y ){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int ls( Array *ar, int num){

    /*
    Improving linear search -> 1. Transposition and 2. Move to head
    1. Transposition:
    in this case if everytime the same element is searched , the element's position 
    is decremented 
    2. Move to head:
    The searched element is moved to the first position
    */

    for(int i=0;i<ar->length;i++){
        if(num==ar->A[i]){
            //transposition
            swap(&ar->A[i],&ar->A[i-1]);
            return i;
        }
    }
    return -1;



}


int main()


{
    struct Array ar;
    // initiation
    int n, i;
    cout << "Enter the size of the array" << endl;
    cin >> ar.size;
    ar.A = new int[ar.size];
    ar.length = 0;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    cout << "Enter the numbers:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> ar.A[i];
        ar.length++;
    }
    Disp(ar);
    App(&ar);
    insert(&ar, 4, 11);
    cout<<"\nAfter Insertion:"<<endl;
    Disp(ar);
    cout<<"\nAfter Deletion:"<<endl;
    del(&ar,4);
    Disp(ar);
    int linear=ls(&ar,5);
    cout<<"\nThe element is found in: "<<linear+1<<" position"<<endl;
    Disp(ar);
    delete[] ar.A;
    return 0;
}