#include <iostream>
#include <vector>

void f(std::vector<std::vector<int>> g, int p, int a, int X, int *ans) {
    if (p == g.size()) {
        if (X==a) {
            *ans = 1;
        }
        return;
    };
    for (int i = 0; i < 2; i++) {
        if (a + g[p][i] > X) {
            return;
        }
        f(g, p + 1, a + g[p][i], X, ans);
    }
}

int main() {
    int N, X;
    std::cin >> N >> X;
    std::vector<std::vector<int>> g(N);
    for (int i = 0; i < N; i++) {
        int a, b;
        std::cin >> a >> b;
        g[i].push_back(a);
        g[i].push_back(b);
    }
    int ans = 0;
    f(g, 0, 0, X, &ans);
    std::cout << (ans ? "Yes" : "No") << std::endl;
}