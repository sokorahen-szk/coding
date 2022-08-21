#include <iostream>
#include <vector>
#include <string>
#include <map>

// TODO: WAのため確認必要

int main () {
    int N, M;
    long long T;
    std::cin >> N >> M >> T;
    long long A[N - 1];
    for (long long i = 0; i < N - 1; i++) std::cin >> A[i];

    std::map<int, long long> mp;
    for (long long i = 0; i < M; i++) {
        int x;
        long long y;
        std::cin >> x >> y;
        mp.insert(std::make_pair(x, y));
    }

    int flg = 0;
    for (int i = 0; i < N - 1; i++) {
        if (mp.count(i + 1) == 1) {
            T += mp[i + 1];
        }
        T -= A[i];

        if (T <= 0 && i != N - 2) {
            flg = 1;
            break;
        }
    }
    std::cout << (flg == 0 ? "Yes" : "No") << std::endl;
}