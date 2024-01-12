#include <iostream>
#include <vector>
#include <algorithm>

void sol(int n, std::vector<int> m) {
    bool used = 0;
    if (m[0] % 2 != 0) {
        used = 1;
        std::cout << "YES" << std::endl;
    }
    if (!used) {
        for (int i = 0; i < n; i += 1) {
            if (m[i] % 2 != 0) {
                used = 1;
                std::cout << "NO" << std::endl;
                break;
            }
        }
    }
    if (!used) {
        std::cout << "YES" << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t;
    for (int k = 0; k < t; k++) {
        int n;
        std::cin >> n;
        std::vector<int> data(n);
        for (int i = 0; i < n; i += 1) {
            std::cin >> data[i];
        }
        std::sort(data.begin(), data.end());
        sol(n, data);
    }
}
