#include <iostream>

int main() {
    int x, y, z, m = 0;
    std::cin >> x >> y >> z;
    int n;
    std::cin >> n;
    int s, e, cnt =0;
    for (int i = 0; i < n; i++) {
        std::cin >> s >> e;
        cnt = s;
        while (cnt < e) {
            if (cnt >= 0 && cnt < 9 | cnt >= 22 && cnt < 23) {
                m += z;
            }
            if (cnt >= 9 && cnt < 17) {
                m += x;
            }
            if (cnt >= 17 && cnt < 22) {
                m += y;
            }
            cnt++;
        }
    }
    std::cout << m << std::endl;
}