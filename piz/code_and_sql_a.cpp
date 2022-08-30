#include <iostream>

// TODO:

int main() {
    int H, W;
    std::cin >> H >> W;
    int A[H][W], B[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char c;
            std::cin >> c;
            A[i][j] = (c == 'B') ? 1 : 0;
            B[i][j] = 0;
        }
    }

    int p = 0, t = 0, l = 0, mx = 0, my = 0, cp = 0;
    while (p < H*W) {
        int x, y, c = 1;

        if (A[p/H][p%W] == 1 && B[p/H][p%W] != 1) {
            l = 1;
            mx = 1, my = 1;
        }

        cp = p;

        while(l == 1) {
            if (t == 0) {
                if (p%W + c < W && A[p/H][p%W + c] == 1) {
                    mx++;
                } else {
                    t = 1;
                    c = 1;
                    continue;
                }
            } else if (t == 1) {
                if (p/H + c < H && A[p/H + c][p%W] == 1) {
                    my++;
                } else {
                    t = 2;
                }
            } else {
                t = 0;
                break;
            }
            c++;
        }

        if (l == 1) {
            int f = 0;
            for (int i = p/H; i < p/H + my; i++) {
                for (int j = p%W; j < p%W + mx; j++) {
                    if (A[i][j] == 1) {
                        B[i][j] = 1;
                    } else {
                        f = 1;
                    }
                }
            }
            std::cout << f << std::endl;
            l = 0;
        }


        p++;
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cout << B[i][j] << " ";
        }
        std::cout << std::endl;
    }
}