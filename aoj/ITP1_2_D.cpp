#include <iostream>

int main() {
    int W, H, x, y, r;
    std::cin >> W >> H >> x >> y >> r;
    if (
        (0 <= x + r && 0 <= x - r && x + r <= W  && x - r <= W)
        && (0 <= y + r && 0 <= y - r && y + r <= H  && y - r <= H)
    ) {
        std::cout << "Yes" << std::endl;
        return 0;
    }
    std::cout << "No" << std::endl;
    return 0;
}