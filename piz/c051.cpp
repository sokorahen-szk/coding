#include <iostream>
#include <algorithm>
#include <vector>

int pt(const std::vector<int> &v) {
    int cnt = 1;
    int sum = 0;
    for (int value : v) {
        if (cnt++%2 == 0) {
            sum += value;
            continue;
        }
        sum += value * 10;
    }
    return sum;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::vector<int> v, s;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    do {
        s.push_back(pt(v));
    } while (std::next_permutation(v.begin(), v.end()));

    int ans = *std::max_element(s.begin(), s.end());
    std::cout << ans << std::endl;

    return 0;
}
