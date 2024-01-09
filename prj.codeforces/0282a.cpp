#include <iostream>

int main() {
    int x = 0;
    int n;
    std::cin >> n;
    std::string operation;
    for (int i = 0; i < n; i++) {
        std::cin >> operation;
        if (operation.find("++") != std::string::npos) {
            x++;
        } else {
            x--;
        }
    }

    std::cout << x;
}