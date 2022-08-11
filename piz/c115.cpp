#include <iostream>

int main() {
    int n, m, ans = 0;
    std::cin >> n >> m;
    int a[n - 1];
    for(int i = 0; i < n - 1; i++) {
        std::cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++) {
        if (a[i] <= m) ans += a[i];
    }
    std::cout << ans << std::endl;
}