#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.size() + 2; i++) {
        std::cout << "+";
    }
    std::cout << std::endl;
    std::cout << "+";
    for (int i = 0; i < s.size(); i++) {
        std::cout << s.at(i);
    }
    std::cout << "+" << std::endl;
    for (int i = 0; i < s.size() + 2; i++) {
        std::cout << "+";
    }
    std::cout << std::endl;
}