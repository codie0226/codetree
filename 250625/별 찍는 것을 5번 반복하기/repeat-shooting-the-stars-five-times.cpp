#include <iostream>
using namespace std;

void printStar(){
    for(int i = 0; i < 10; i++) {
        cout << "*";
    }

    cout << endl;
}

int main() {
    // Please write your code here.

    for(int i = 0; i < 5; i++){
        printStar();
    }
    return 0;
}