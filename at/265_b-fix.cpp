#include <iostream>
#include <vector>
#include <string>
#include <map>

int main () {
    int N, M;
    long T;
    std::cin >> N >> M >> T;
    long A[N - 1];
    for (int i = 0; i < N - 1; i++) std::cin >> A[i];

    std::map<int, long> mp;
    for (int i = 0; i < M; i++) {
        int x;
        long y;
        std::cin >> x >> y;
        mp.insert(std::make_pair(--x, y));
    }

    int flg = 0;
    for (int i = 0; i < N - 1; i++) {
        if (mp.count(i) == 1) {
            T += mp[i];
        }
        T -= A[i];

        if (T <= 0) {
            std::cout << "No\n";
            return 0;
        }
    }
    std::cout << "Yes\n";
}