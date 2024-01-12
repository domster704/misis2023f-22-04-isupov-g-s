#include <iostream>
#include <vector>

int main() {
    int q;
    std::cin >> q;
    for (int i = 0; i < q; i += 1) {
        int l1, r1, l2, r2;
        int ans_1, ans_2;
        std::cin >> l1 >> r1 >> l2 >> r2;
        std::vector<int> m = {l1, r1, l2, r2};
        for (int j = 0; j < 4; j += 1) {
            for (int k = 0; k < 4; k += 1) {
                if (j != k) {
                    if (l1 <= m[j] && m[j] <= r1 && m[k] >= l2 && m[k] <= r2) {
                        ans_1 = m[j];
                        ans_2 = m[k];
                    }
                }
            }
        }
        std::cout << ans_1 << " " << ans_2 << std::endl;
    }
}
