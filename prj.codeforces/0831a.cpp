#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }
    int status = 1;
    for (int i = 0; i < n - 1; i += 1) {
        if (a[i] < a[i + 1]) {
            if (status != 1) {
                std::cout << "NO";
                return 0;
            }
        }
        if (a[i] == a[i + 1]) {
            if (status == 1) {
                status = 0;
            }
            if (status != 0) {
                std::cout << "NO";
                return 0;
            }
        }
        if (a[i] > a[i + 1]) {
            status = -1;
        }
    }
    std::cout << "YES";

}
