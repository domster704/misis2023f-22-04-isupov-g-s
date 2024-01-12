#include <iostream>

int main() {
    int test_amount;
    std::cin >> test_amount;
    for (int j = 0; j < test_amount; j += 1) {
        int n;
        std::cin >> n;
        long long ans = 0;
        for (int i = 0; i <= n / 2; i += 1) {
            ans += static_cast<long long>(i) * i;
        }
        std::cout << ans * 8 << std::endl;
    }
}
