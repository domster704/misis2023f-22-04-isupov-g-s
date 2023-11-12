//
// Created by isupo on 12.11.2023.
//

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    int res = 0;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] > str2[i]) {
            res = 1;
            break;
        } else if (str1[i] < str2[i]) {
            res = -1;
            break;
        }
    }
    std::cout << res;
}