#include <iostream>

int main () {
    int n = 0;
    int a[10000];
    for (int i = 0; i < 10000; i++) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        a[i] = n;
    }
    for (int i = 0; i < 10000; i++) {
        if (a[i] == 0) break;
        std::cout << "Case " << i + 1 << ": " << a[i] << std::endl;
    }

    return 0;
}