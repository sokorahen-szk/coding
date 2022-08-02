#include <iostream>
#include <vector>
#include <algorithm>

// TODO:コード修正の必要あり。

void swap(int ary[][3], int i, int p) {
            int tmp;
            tmp = ary[i - 1][p];
            ary[i - 1][p] = ary[i][p];
            ary[i][p] = tmp;
}

int l(int ary[][3], int i, int p) {
    if (ary[i - 1][p] < ary[i][p]) {
        return 1;
    }
    return 0;
}

void sort(int ary[][3], int s, int e, int p) {
    int b = 0;
    for (int i = s; i < e; i++) {
        for(int j = s; j < e; j++) {
            if (j == 0) {
                continue;
            }

            b = l(ary, j, p);
            if (b != 1) {
                continue;
            }

            for (int k = p; k < 3; k++) {
                swap(ary, j, k);
            }
        }
    }
}

void splitSort(int ary[][3], int N, int sortPos) {
    int x = -1;
    int sp, ep = 0;
    for (int i = 0; i < N; i++) {
        if (x == -1) {
            x = ary[i][sortPos - 1];
            sp = i;
            continue;
        }
        if (x != ary[i][sortPos - 1]) {
            ep = i;
            sort(ary, sp, ep, sortPos);
            x = -1;
            continue;
        }
    }
}

int main () {

    int N;
    std::cin >> N;

    int score[N][3];
    for (int i = 0; i < N; i++) {
        std::cin >> score[i][0] >> score[i][1] >> score[i][2];
    }

    sort(score, 0, N, 0);
    splitSort(score, N, 1);
    splitSort(score, N, 2);


    for (int i = 0; i < N; i++) {
        std::cout << score[i][0] << " " << score[i][1] << " " << score[i][2] << std::endl;
    }

    return 0;
}