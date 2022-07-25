#include <iostream>

std::string inv(std::string s1) {
    return "." == s1 ? "*" : ".";
}

struct postionXY {
    int x;
    int y;
};

void movePos(int scp, int dcp, postionXY &posXY) {
    if (scp == 1) {
        if (dcp == 2) posXY.x += 1;
        if (dcp == 4) posXY.x -= 1;
    }
    if (scp == 2) {
        if (dcp == 3) posXY.y += 1;
        if (dcp == 1) posXY.y -= 1;
    }
    if (scp == 3) {
        if (dcp == 4) posXY.x -= 1;
        if (dcp == 2) posXY.x += 1;
    }
    if (scp == 4) {
        if (dcp == 1) posXY.y -= 1;
        if (dcp == 3) posXY.y += 1;
    }
}

void calcPos(int i, int *cp) {
    *cp += i;
    if (1 > *cp) *cp = 4;
    if (4 < *cp) *cp = 1;
}

int main() {
    int H, W, h0, w0, sPos, dPos = 1;
    std::cin >> H >> W;
    std::cin >> h0 >> w0;
    std::string map[H][W];
    std::string str;
    postionXY posXY = {w0 - 1, h0 - 1};

    std::string s;
    for(int i = 0; i < H; i++) {
        std::cin >> s;
        for(int j = 0; j < s.size(); j++) {
            map[i][j] = s[j];
        }
    }

    while (posXY.y >= 0 && posXY.y < H && posXY.x >= 0 && posXY.x < W) {
        sPos = dPos;
        str = map[posXY.y][posXY.x];
        if (str == ".") {
            calcPos(1, &dPos);
        } else {
            calcPos(-1, &dPos);
        }
        map[posXY.y][posXY.x] = inv(str);
        movePos(sPos, dPos, posXY);
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cout << map[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}