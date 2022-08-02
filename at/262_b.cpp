#include <iostream>
#include <vector>

int main () {
    int n,m;
    std::cin >> n >> m;
    std::vector<int> a(m), b(m);
    std::vector<int> used(n, 0);
    std::vector<std::vector<int>> connect(n, std::vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        std::cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }


}