#include <iostream>
#include <cstdio>

int main() {
    int a, b;
    std::cin >> a >> b;
    printf("%d %d %0.5f", a/b, a%b, (double) a/b);
}