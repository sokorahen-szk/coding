#include <iostream>

// TODO:コード修正の必要あり。

int sumNum(int ary[], int s, int e) {
    int sum = 0;
    for (int i = s; i < s+e; i++) {
        sum += ary[i];
    }

    return sum;
}

int main () {
    int M, N, s, e = 0;
    int sum = 0;
    std::cin >> M >> N;
    int d[M], r[M];
    for (int i = 0; i < M; i++) {
        std::cin >> d[i] >> r[i];
    }

    int min = -1;
    int ave = 0;
    for (int i = 0; i < M - N; i++) {
        sum = sumNum(r, i, N);
        ave = (int) sum / N;
        if (min == -1) {
            min = ave;
            s = d[i];
            e = d[i + N-1];
        }

        if (min > ave) {
            s = d[i];
            e = d[i + N-1];
        }
    }

    std::cout << s << " " << e << std::endl;

    return 0;
}