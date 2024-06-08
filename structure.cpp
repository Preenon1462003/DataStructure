#include <iostream>
using namespace std;

struct Cards {
    int type;
    char pattern;
    char color;
};

int main() {
    struct Cards c[2];
    cout << "Enter the data" << endl;
    for (int i = 0; i < 2; i++) {
        cin >> c[i].color >> c[i].pattern >> c[i].type;
    }
    cout << "Show" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Color: " << c[i].color << ", Pattern: " << c[i].pattern << ", Type: " << c[i].type << endl;
    }
    return 0;
}
