#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (int j = 0; j < t; j += 1) {
        int n;
        std::cin >> n;
        std::vector<int> traffic(n);
        long long gen_traffic = 0;
        for (int i = 0; i < n; i += 1) {
            std::cin >> traffic[i];
            gen_traffic += traffic[i];
        }
        std::cout << (gen_traffic % n) * (n - gen_traffic % n) << std::endl;
    }
}
