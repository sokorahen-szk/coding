#include <iostream>

int main() {
    int a, b;
    char op[1];
    int x[1000];
    for (int i = 0; i < 1000; i++) {
        x[i] = 0;
    }
    int i = 0;
    while (1) {
        std::cin >> a >> op >> b;
        if (op[0] == '?') break;
        if (op[0] == '+') {
            x[i++] = a + b;
        }
        if (op[0] == '-') {
            x[i++] = a - b;
        }
        if (op[0] == '*') {
            x[i++] = a * b;
        }
        if (op[0] == '/') {
            x[i++] = a / b;
        }
    }
    for (int i = 0; i < 1000; i++) {
        if (x[i] == 0) break;
        std::cout << x[i] << std::endl;
    }
}