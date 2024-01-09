//
// Created by isupo on 09.01.2024.
//

#include <iostream>

int main() {
    int a = 1, m = 1;
    std::cin >> a >> m;
    int fl = 1;
    for (int i = 0; i <= 20; i += 1) {
        a += a % m;
        if (a % m == 0) {
            std::cout << "Yes";
            fl = 0;
            break;
        }
    }
    if (fl == 1) {
        std::cout << "No";
    }
}
