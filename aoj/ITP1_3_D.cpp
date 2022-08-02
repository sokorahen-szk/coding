#include <iostream>

int fc(int a, int b, int c) {
    int x, ans = 0;
    for (int i = a; i <= b; i++) {
        x = 0;
        while(x <= c) {
            x += i;
            if (x == c) {
                ans++;
                break;
            }
        }
    }
    return ans;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << fc(a, b, c) << std::endl;
}