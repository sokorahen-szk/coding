#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

typedef std::pair<int, std::string> pairV;

int main () {
    int n;
    std::cin >> n;
    std::map<int, std::string> m;
    int b;
    std::string p;
    for (int i = 0; i < n; i++) {
        std::cin >> b >> p;
        m[b] = p;
    }
    std::vector<pairV> v;
    std::copy(m.begin(), m.end(), std::back_inserter<std::vector<pairV>>(v));
    std::sort(v.begin(), v.end(), [](const pairV &l, const pairV &r) {
        return l.first < r.first;
    });
    for (auto &p: v) {
        std::cout << p.first << " " << p.second << std::endl;
    }
}