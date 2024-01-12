#include <iostream>
#include <vector>

int main() {
    int test_amount;
    std::cin >> test_amount;
    for (int j = 0; j < test_amount; j += 1) {
        int participants;
        std::cin >> participants;
        std::vector<int> meet_count(participants + 1);
        std::vector<int> winner(participants + 1);
        for (int i = 0; i < participants; i += 1) {
            int value;
            std::cin >> value;
            meet_count[value] += 1;
            winner[value] = i;
        }
        int ans = -1;
        for (int i = 0; i < participants + 1; i += 1) {
            if (meet_count[i] == 1) {
                ans = winner[i] + 1;
                break;
            }
        }
        std::cout << ans << std::endl;
    }
}
