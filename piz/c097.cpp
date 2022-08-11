#include <iostream>

int main() {
    int n, x, y;
    std::cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        if (i % x == 0 && i % y == 0) {
            std::cout << "AB" << std::endl;
            continue;
        }
        if (i % x == 0) {
            std::cout << "A" << std::endl;
            continue;
        }
        if (i % y == 0) {
            std::cout << "B" << std::endl;
            continue;
        }
        std::cout << "N" << std::endl;
    }
}