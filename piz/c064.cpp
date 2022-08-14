#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;
    int am[m];
    for (int i = 0; i < m; i++) {
        std::cin >> am[i];
    }
    int ans, t;
    for (int i = 0; i < n; i++) {
        ans = 0;
        for (int j = 0; j < m; j++) {
            std::cin >> t;
            ans += (int) (am[j] * (t * 0.01));
        }
        std::cout << ans << std::endl;
    }
}