#include <iostream>
#include <bitset>

typedef std::bitset<4> bNum;

int main () {
    int N;
    std::cin >> N;
    std::bitset<4> ans;
    std::string s;
    for (int i = 0; i < N; i++) {
        std::cin >> s;
        ans = ans^bNum(s);
    }
    std::cout << ans << std::endl;
    return 0;
}