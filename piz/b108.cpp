#include <iostream>

int main() {
    int n,m, total = 0, gtotal = 0;
    std::cin >> n >> m;
    int an[n], am[m], g[n], gcnt[n];
    for (int i = 0; i < n; i++) std::cin >> an[i];
    for (int i = 0; i < m; i++) {
        std::cin >> am[i];
        total += am[i];
    }
    for (int i = 0; i < n; i++) g[i] = 0;
    for (int i = 0; i < n; i++) gcnt[i] = 0;

    int t, cnt = 0;
    while (1) {
        for (int i = 0; i < m; i++) {
            if (am[i] == 0) continue;
            while(cnt < n) {
                if (an[cnt] - am[i] >= 0) {
                    if (g[cnt] == 0) {
                        g[cnt] = 1;
                        gcnt[cnt] += am[i];
                        am[i] = 0;
                    }
                    cnt++;
                    break;
                }
                gcnt[cnt] += an[cnt];
                am[i] -= an[cnt];
                g[cnt] = 1;
                cnt++;
            }
        }
        cnt = 0;
        for (int i = 0; i < n; i++) g[i] = 0;

        gtotal = 0;
        for(int i = 0; i < n; i++) {
            gtotal += gcnt[i];
        }
        if (total == gtotal) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << gcnt[i] << std::endl;
    }
}