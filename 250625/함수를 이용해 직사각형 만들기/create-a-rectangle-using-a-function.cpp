#include <iostream>

using namespace std;

int n, m;

void printStar(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << 1;
        }

        cout << endl;
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    printStar(n, m);

    return 0;
}