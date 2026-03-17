#include <iostream>
using namespace std;

int main() {
    cout << "Hello! This is a C++ demo program." << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }

    cout << "Counting from 1 to " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}


