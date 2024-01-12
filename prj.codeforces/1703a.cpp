#include <iostream>
#include <string>

void check(std::string word) {
    if (word[0] != 'Y' && word[0] != 'y') {
        std::cout << "NO" << "\n";
    } else if (word[1] != 'E' && word[1] != 'e') {
        std::cout << "NO" << "\n";
    } else if (word[2] != 'S' && word[2] != 's') {
        std::cout << "NO" << "\n";
    } else {
        std::cout << "YES" << "\n";
    }
}

int main() {
    int amount;
    std::string phrase;
    std::cin >> amount;
    for (int i = 0; i < amount; i += 1) {
        std::cin >> phrase;
        check(phrase);
    }
}
