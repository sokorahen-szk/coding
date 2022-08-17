#include <iostream>

int main () {
    int n;
    std::cin >> n;

    int a[n], b[n];
    int ans[n];

    for (int i = 0; i < n; i++) std::cin >> a[i] >> b[i];

    int s, e, min = 0, max = 0;
    for (int i = 0; i < n; i++) {
        s = a[i];
        e = b[i];
        for (int j = i; j < n; j++) {
            if (min == 0) min = s;
            if (max == 0) max = e;
            if (i == j) continue;
            if ((a[j] == e||a[j] == e+1) || (a[j] >= s && a[j] <= e)) {
                e = b[j];
                max = e;
            }
        }
        ans[i] = max - (min - 1);
        max = 0; min = 0;
    }

    int at = 0;
    for (int i = 0; i < n; i++) {
        if (at == 0) at = ans[i];
        if (at < ans[i]) {
            at = ans[i];
        }
    }
    std::cout << at << std::endl;
}