#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n >= 1000) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}