#include <iostream>
#include <complex>
#include <algorithm>

const int BlockLimit = 10001;

int diff(int a, int b) {
    int x;
    int ab = std::abs(a - b);
    if (a > b) {
        return ab * -1;
    }
    return ab;
}

void moveX(int *m, int H, int W, int mpos) {
    int pos;
    for (int j = 0; j < W; j++) {
        pos = mpos*W + j;
        if (m[pos] != BlockLimit) {
            continue;
        }
        int d = diff(m[pos - 2], m[pos - 1]);
        m[pos] = d + m[pos - 1];
    }
}
void moveY(int *m, int H, int W, int mpos) {
    int pos;
    for (int j = 0; j < H; j++) {
        pos = mpos + (j*W);
        if (m[pos] != BlockLimit) {
            continue;
        }
        int d = diff(m[pos - W*2], m[pos - W]);
        m[pos] = d + m[pos - W];
    }
}

int main() {

    int H, W;
    int r1, l1, r2, l2;

    std::cin >> H >> W;
    std::cin >> r1 >> l1;
    std::cin >> r2 >> l2;

    int b[H * W];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            b[i*W + j] = BlockLimit;
        }
    }

    b[0] = r1;
    b[1] = l1;
    b[W] = r2;
    b[W + 1] = l2;

    for (int i = 0; i < std::max(H, W); i++) {
        moveX(b, H, W, i);
        moveY(b, H, W, i);
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cout << b[i*W + j] << (j + 1 == W ? "" : " ");
        }
        std::cout << std::endl;
    }

    return 0;
}
