#include <iostream>

// TODO:

int search(int m[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (m[i] == key) {
            return i;
        }
    }
    return -1;
}

void move(int m[], int n,  int pos) {
    int sPos = pos, dPos = pos;
    for (int i = 0; i < n; i++) {
        if (dPos < n) {
            dPos++;
        } else {
            dPos = 0;
        }
        if (m[dPos] == 0) {
            m[dPos] = m[sPos];
            m[sPos] = 0;
        }
    }
}

int main () {
    int N, M, K, c = 1, x = 0, m = 0;
    std::cin >> N >> M >> K;
    int map[N];
    for (int i = 0; i < N; i++) {
        map[i] = 0;
    }
    for (int i = 0; i < M; i++) {
        std::cin >> x;
        if (i == 0) {
            map[0] = i + 1;
            continue;
        }
        map[N - i] = i + 1;
    }

    int cPos;
    while (K >= c) {
        cPos = search(map, N,  c);
        //std::cout << cPos << std::endl;
        move(map, N, cPos);
        c++;
    }

    for(int i = 0; i < N; i++) {
        std::cout << map[i] << std::endl;
    }

    return 0;
}