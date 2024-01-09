#include <iostream>

int main() {
    int n = 0;
    int k = 0;
    int mini = 10000;
    std::cin >> n >> k;
    int a;
    for (int i = 0; i < n; i += 1) {
        std::cin >> a;
        if (k % a == 0 && k / a < mini) {
            mini = k / a;
        }
    }
    std::cout << mini;
}
