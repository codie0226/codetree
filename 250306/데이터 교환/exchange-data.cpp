#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp = c;
    c = b;
    b = a;
    a = temp;

    cout << a << endl << b << endl << c;
    return 0;
}