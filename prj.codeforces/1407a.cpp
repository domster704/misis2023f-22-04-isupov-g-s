#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t != 0) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; i += 1) {
            std::cin >> a[i];
        }
        int zeros = 0;
        int ones = 0;
        for (auto& el: a) {
            if (el == 1) {
                ones += 1;
            } else {
                zeros += 1;
            }
        }
        if (zeros >= ones) {
            std::cout << zeros << "\n";
            for (int i = 0; i < zeros; i += 1) {
                std::cout << 0 << " ";

            }
        } else if (ones - ones % 2 > zeros) {
            std::cout << ones - ones % 2 << "\n";
            for (int i = 0; i < ones - ones % 2; i += 1) {
                std::cout << 1 << " ";
            }
        } else {
            int first = -1;
            int second = -1;
            for (int i = 0; i < n; i += 1) {
                if (a[i] == 1) {
                    if (first == -1) {
                        first = i;
                    } else {
                        second = i;
                        break;
                    }
                }
            }
            if ((second - first + 1) % 2 == 0) {
                std::cout << zeros + 2 << "\n";
                for (int i = 0; i < n; i += 1) {
                    if (a[i] == 0) {
                        std::cout << a[i] << " ";
                    }
                    if (i == first || i == second) {
                        std::cout << a[i] << " ";
                    }
                }
            } else {
                a.erase(a.begin() + first + 1);
                second -= 1;
                std::cout << zeros + 1 << "\n";
                for (int i = 0; i < n; i += 1) {
                    if (a[i] == 0) {
                        std::cout << a[i] << " ";
                    }
                    if (i == first || i == second) {
                        std::cout << a[i] << " ";
                    }
                }
            }
        }
        std::cout << "\n";
        t -= 1;
    }
}
