#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    double r;
    std::cin >> r;
    double e = r * r * M_PI;
    double s = r * 2 * M_PI;
    printf("%0.6f %0.6f\n", e, s);
}