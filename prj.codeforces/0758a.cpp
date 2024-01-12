#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int people_count;
    std::cin >> people_count;
    std::vector<int> people_wealth(people_count);
    for (int i = 0; i < people_count; i += 1) {
        std::cin >> people_wealth[i];
    }
    std::sort(people_wealth.begin(), people_wealth.end());
    int money_to_spend = 0;
    for (int i = 0; i < people_count - 1; i += 1) {
        if (people_wealth[i] < people_wealth[people_count - 1]) {
            money_to_spend += (people_wealth[people_count - 1] - people_wealth[i]);
        }
    }
    std::cout << money_to_spend;
}
