#include <iostream>

int f(int n) {
    int x = n;
    while(x) {
        if ((x % 10) == 3) {
            return 1;
        }
        x /= 10;
    }
    return 0;
}

int main () {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 10 == 3 || f(i) == 1) {
            std::cout << " " << i;
        }
    }
    std::cout << std::endl;
}