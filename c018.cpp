#include <iostream>
#include <string>
#include <map>

int main(void) {
    int n, m, b, d;
    int v[100];
    std::cin >> n;
    std::map<std::string, int> recipe;
    std::map<std::string, int> zairyo;
    char a[255], c[255];

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        recipe[a] = b;
    }

    std::cin >> m;
    for (int i = 0; i < m; i++) {
        std::cin >> c >> d;
        zairyo[c] = d;
    }

    int cnt = 0;
    for(std::map<std::string, int>::iterator i = recipe.begin() ; i != recipe.end(); ++i) {
        v[cnt++] = (int) zairyo[i->first] / i->second;
    }

    int min;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            min = v[i];
            continue;
        }

        if (min > v[i]) {
            min = v[i];
        }
    }

    std::cout << min << std::endl;
    return 0;
}