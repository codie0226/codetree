#include <iostream>

using namespace std;

int N;

void printNum(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(num >= 10) {
                num = 1;
            }
            cout << num++ << " ";
        }
        cout << endl;
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    printNum(N);
    return 0;
}