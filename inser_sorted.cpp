#include <iostream>
using namespace std;

struct array {
    int *A;
    int length;
    int size;
};

int bs( array *a, int l, int h, int num) {
    if (l <= h) {
        int mid = (l + h) / 2;
        if (num < a->A[mid]) {
            return bs(a, l, mid - 1, num);
        } else if (num > a->A[mid]) {
            return bs(a, mid + 1, h, num);
        } else {
            return mid;
        }
    }
    return l; // Return the insertion point if element not found
}

void insert( array *a, int num) {
    if (a->length >= a->size) {
        cout << "Array is full, cannot insert" << endl;
        return;
    }
    int pos = bs(a, 0, a->length - 1, num);
    for (int i = a->length; i > pos; i--) {
        a->A[i] = a->A[i - 1];
    }
    a->A[pos] = num;
    a->length++;
}

bool sorted( array a){
    for ( int i=0;i<a.length;i++){
        if(a.A[i]>a.A[i]){
            return false;
        }
    }
    return true;
}

int main() {
    struct array ar;
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> ar.size;
    ar.A = new int[ar.size];
    cout << "Enter the number of elements:" << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> ar.A[i];
    }
    ar.length = n;

    int num;
    cout << "Enter the number to insert:" << endl;
    cin >> num;

    insert(&ar, num);

    cout << "Array after insertion:" << endl;
    for (int i = 0; i < ar.length; i++) {
        cout << ar.A[i] << " ";
    }
    cout << endl;
    bool sort=sorted(ar);
    if(sort==true){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
    delete[] ar.A;
    return 0;
}
