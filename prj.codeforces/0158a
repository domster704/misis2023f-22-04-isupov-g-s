#include <iostream>
#include <vector>

int main() {
    int n, k;
    int sum = 0;
    std::vector<int> a;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) break;
        if (i < k || a[i] == a[i - 1]) {
            sum++;
        } else {
            break;
        }
    }

    std::cout << sum;
    return 0;
}
