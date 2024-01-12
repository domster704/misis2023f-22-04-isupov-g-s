#include <iostream>

long long power(int a, int b) {
    long long r = 1;
    for (int i = 0; i < b; i++) {
        r *= a;
    }
    return r;
}

int main() {
    int m = 2, n = 4;
    std::cin >> n >> m;
    if (n >= 31) {
        std::cout << m;
    } else {
        std::cout << m % power(2, n);
    }
}
