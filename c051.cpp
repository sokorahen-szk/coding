#include <iostream>

int ptn(int ary[4], int data[4], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ary[i]; j++) {
            if (i%2 == 1) {
                sum += data[i] * 10;
            } else {
                sum += data[i];
            }
        }
    }
    return sum;
}

int main() {
    int x[4], p[4];
    std::cin >> x[0] >> x[1] >> x[2] >> x[3];
    int max = -1;
    int c = 0;
    for (int i = 0; i <= 1; i++) {
        p[0] = i;
        for (int j = 0; j <= 1; j++) {
            p[1] = j;
            for (int k = 0; k <= 1; k++) {
                p[2] = k;
                for (int w = 0; w <= 1; w++) {
                    p[3] = w;
                    c = ptn(p, x, 4);
                    if (max == -1) {
                        max = c;
                        continue;
                    }
                    if (max < c) {
                        max = c;
                    }
                }
            }
        }
    }
    std::cout << max << std::endl;
    return 0;
}
