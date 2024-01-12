#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int point = 0, dash = 0;
    for (int i = 0; i < s.length(); i += 1) {
        if (s[i] == '-') {
            dash += 1;
        } else {
            point += 1;
        }
    }
    if (dash == 0 || point == 0) {
        std::cout << "YES";
    } else if (dash % point == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}
