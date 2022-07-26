#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::string s;
    if (a > b) s = "a > b";
    if (a < b) s = "a < b";
    if (a == b) s = "a == b";
    std::cout << s << std::endl;
}