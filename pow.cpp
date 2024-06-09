#include <iostream>
using namespace std;

 double pow(int m, int n) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 1.0 / (pow(m, -n));
    }
    return pow(m, n - 1) * m;
}

int main() {
    double r;
    r = pow(2, -8);
    cout << r;
    return 0;
}
