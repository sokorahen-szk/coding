#include <iostream>
using namespace std;
int main(void){
    int N, x;
    std::cin >> N >> x;
    int A[N];
    int B[N];
    for (int i = 0; i < N; i++) {
        if (B[0] == 0) {
            B[0] = x;
        } else {
            B[i] = 0;
        }
    }
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int c = 0;
    while(c < N - 1) {
        int t = 0;
        if (0 == c) t = A[c] - B[c];
        if (0 < c) t = A[c] - B[c - 1] - B[c];
        B[c + 1] = t;
        c++;
    }
    for (int i = 0; i < N; i++) {
        std::cout << ((i == 0) ? "" : " ") << B[i];
    }
    std::cout << std::endl;
}