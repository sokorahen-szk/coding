#include <iostream>

// TODO: WAのため確認必要

int main() {
    int X, Y, N;
    std::cin >> X >> Y >> N;
    int sum = 0;
    if (X*3 > Y) {
        int i = 0;
        while(1) {
            i += 3;
            if (i > N) break;
            sum += Y;
        }
        sum += X;
    } else {
        for (int i = 0; i < N; i++) {
            sum += X;
        }
    }
    std::cout << sum << std::endl;
}