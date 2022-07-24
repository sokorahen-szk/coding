#include <iostream>

int main () {
    int M, N;
    std::cin >> M >> N;

    int a[M];
    int cnt, b, ans = 0;
    int min = 9999;
    for (int i = 0; i < M; i++) {
        cnt = 1;
        std::cin >> a[i];
        while (1) {
            if (a[i]*(cnt + 1) <= N) {
                cnt++;
            } else {
                break;
            }
        }
        b = N - a[i]*cnt;
        if (min > b) {
            min = b;
            ans = i;
        }
        if (min == b && a[ans] < a[i]) {
            ans = i;
        }
    }
    std::cout << ans + 1 << std::endl;
    return 0;
}