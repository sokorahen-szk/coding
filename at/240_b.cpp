#include <iostream>

int main() {
    int n, t, f, c = 0, ans = 0;
    std::cin >> n;
    int a[n];
    for (int i = 0 ;i < n; i++) a[i] = 0;

    for (int i = 0; i < n; i++) {
        f = 0;
        std::cin >> t;
        for (int j = 0; j < n; j++) {
            if (a[j] == t) f = 1;
            if (a[j] == 0) break;
        }
        if (f==0) {
            a[c++] = t;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) break;
        ans++;
    }
    std::cout << ans << std::endl;
}