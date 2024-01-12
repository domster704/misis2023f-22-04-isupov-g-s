#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t != 0) {
        int n;
        std::cin >> n;
        int max_bit = 1;
        while (max_bit < n) {
            max_bit *= 2;
        }
        max_bit /= 2;
        int i = n - 1;
        while (i >= max_bit) {
            std::cout << i << " ";
            i -= 1;
        }
        std::cout << "0 ";
        i = 1;
        while (i < max_bit) {
            std::cout << i << " ";
            i += 1;
        }

        std::cout << "\n";
        t -= 1;
    }
}
