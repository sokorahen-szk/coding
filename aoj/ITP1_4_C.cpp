#include <iostream>
#include <string>

int main() {
    int a, b, n;
    std::string s = "";
    while (1) {
        std::cin >> a >> s >> b;
        if (s[0] == '?') break;
        if (s[0] == '+') {
            n = a + b;
        }
        if (s[0] == '-') {
            n = a - b;
        }
        if (s[0] == '*') {
            n = a * b;
        }
        if (s[0] == '/') {
            n = a / b;
        }

        std::cout << n << std::endl;
    }
}