#include <iostream>
#include <map>
#include <algorithm>
#include <utility>
#include <vector>

int main () {
    int N, b, max = 0, cnt = 0;
    std::map<int, int> a;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> b;
        a[b] += 1;
    }

    std::map<int, int>::iterator it = a.begin();
    while(it != a.end()) {
        if (max < it->second) {
            max = it->second;
        }
        it++;
    }
    std::map<int, int>::iterator its = a.begin();
    while(its != a.end()) {
        if (max == its->second) {
            std::cout << (cnt++ != 0 ? " " : "") << its->first;
        }
        its++;
    }
    std::cout << std::endl;

    return 0;
}