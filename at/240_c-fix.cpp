#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    unordered_set<int> st, tm;
    st.insert(0);
    for (int i =0; i < N; i++) {
        int a, b;
        std::cin >> a >> b;
        tm.clear();
        for (auto &c : st) {
            if (c > X) continue;
            tm.insert(c + a), tm.insert(c + b);
        }
        st = tm;
    }

    if(st.count(X)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}