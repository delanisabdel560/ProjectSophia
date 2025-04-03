#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n * 3 + 1;
    } else {
        cout << n * 2 - 1;
    }
}
