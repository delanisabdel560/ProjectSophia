#include <iostream>

int main() {
    int n;
    std::cout << "Enter an integer value: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << n << " is even." << std::endl;
    } else {
        std::cout << n << " is odd." << std::endl;
    }

    return 0;
}
