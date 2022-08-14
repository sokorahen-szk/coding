#include <iostream>

int main() {
    int n, d, t, s = 0;
    std::cin >> n >> d;
    s = d;
    for (int i = 0; i < n - 1; i++) {
        std::cin >> t;
        s += d - t;
    }
    std::cout << d * s << std::endl;
}