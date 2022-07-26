#include <iostream>

int main() {
    int a[3];
    std::cin >> a[0] >> a[1] >> a[2];
    int tmp = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[j] > a[i]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        std::cout << (i!=0 ? " ": "") << a[i];
    }
    std::cout << std::endl;
}