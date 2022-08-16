#include <iostream>

int main () {
    int n;
    std::cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++) std::cin >> a[i] >> b[i];

    int f = 0, e = 0, max = 0, min = 0;
    for (int i = 0; i < n; i++) {
        f = a[i];
        e = b[i];
        for (int j = 0; j < n; j++) {
            if (a[i] > a[j]) continue;
            if (e == a[j] || e + 1 == a[j]) {
                min = f;
                e = b[j];
                break;
            }
        }
        if (max < (min - 1) + e) max =  e - (min - 1);
    }
    std::cout << max << std::endl;
}