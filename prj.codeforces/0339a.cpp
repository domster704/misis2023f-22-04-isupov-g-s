//
// Created by isupo on 12.11.2023.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums;
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.length(); i += 2) {
        nums.push_back(s[i] - 48);
    }

    std::sort(nums.begin(), nums.end());
    std::cout << nums[0];
    for (int i = 1; i < nums.size(); i++) {
        std::cout << '+' << nums[i];
    }
}