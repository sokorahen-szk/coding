#include <iostream>
#include <cmath>

int main() {
    int n, h, w, p, q;
    std::cin >> n >> h >> w >> p >> q;
    int a[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) a[i][j] = 0;
    }
    int y, x;
    for (int i = 0; i < n; i++) {
        std::cin >> y >> x;
        a[y][x] = 1;
    }
    int min = -1, t;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            t = abs(p - i) + abs(q - j);
            if ((min == -1 || min > t) && a[i][j] != 1) {
                min = t;
            }
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (min == (abs(p - i) + abs(q - j)) && a[i][j] != 1) {
                std::cout << i << " " << j << std::endl;
            }
        }
    }
}