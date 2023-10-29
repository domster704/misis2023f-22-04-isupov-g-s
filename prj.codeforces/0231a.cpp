#include <iostream>

int main() {
    int n;
    int sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        sum += a + b + c >= 2 ? 1 : 0;
    }
    std::cout << sum;
    return 0;
}
