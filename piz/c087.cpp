#include <iostream>
#include <string>
#include <stdio.h>

int main() {
    std::string s;
    std::string r;
    std::cin >> s;

    while (1) {
        r = "";
        for (int i = s.size(); i > 0; i--) {
            r += s[i - 1];
        }
        if (s == r) {
            std::cout << s << std::endl;
            break;
        }

        s = std::to_string(atoi(s.c_str()) + atoi(r.c_str()));
    }
}