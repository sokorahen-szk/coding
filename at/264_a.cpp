#include <iostream>
#include <string>

int main() {
    int l, r;
    std::cin >> l >> r;
    std::string s = "atcoder";
    std::string t = "";
    for (int i = l - 1; i < r; i++) {
        t += s[i];
    }
    std::cout << t << std::endl;
}