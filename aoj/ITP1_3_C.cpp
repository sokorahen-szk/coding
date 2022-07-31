#include <iostream>

int main() {
    int a[10000][2];
    int tmp, i = 0;
    while (std::cin >> a[i][0] >> a[i][1]) {
        if (a[i][0] == 0 && a[i][1] == 0) break;
        if (a[i][0] > a[i][1]) {
            tmp = a[i][0];
            a[i][0] = a[i][1];
            a[i][1] = tmp;
        }
        i++;
    }
    for (int i = 0; i < 10000; i++) {
        if (a[i][0] == 0 && a[i][1] == 0) break;
        std::cout << a[i][0] << " " << a[i][1] << std::endl;
    }
    return 0;
}