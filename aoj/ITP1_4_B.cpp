#include <iostream>
#include <cmath>

int main() {
    double r;
    std::cin >> r;
    double e = r * r * M_PI;
    double s = r * M_PI;
    printf("%0.8f %0.8f\n", e, s);
}