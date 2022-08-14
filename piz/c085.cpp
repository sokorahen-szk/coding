#include <iostream>
#include <string>

int search(char c, std::string a) {
    for (int i = 0; i < a.size(); i++) {
        if (c == a[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[26];
    for (int i = 0; i < 26; i++) {
        std::cin >> a[i];
    }
    std::string data = "abcdefghijklmnopqrstuvwxyz";
    std::string s;
    std::cin >> s;

    int p = 0;
    for (int i = 0; i < s.size(); i++) {
        p = search(s[i], data);
        if (a[p] > 0) {
            a[p]--;
            std::cout << s[i];
        }
    }
    std::cout << std::endl;
}