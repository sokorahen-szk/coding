#include <iostream>

int main () {
    int S;
    std::cin >> S;
    std::cout << S/(60*60) << ":" << S/60 % 60 << ":" << S % 60 << std::endl;
}