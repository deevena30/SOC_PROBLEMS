#include <iostream>
using namespace std;
int luckiness(int n) {
    int min_d = 9, max_d = 0;
    while (n > 0) {
        int d = n % 10;
        max_d = max(max_d, d);
        min_d = min(min_d, d);
        n /= 10;
    }
    return max_d - min_d;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int best_no = l, best_luck = -1;

        for (int i = l; i <= r; ++i) {
            int curr_luck = luckiness(i);
            if (curr_luck > best_luck) {
                best_luck = curr_luck;
                best_no = i;
            }
            if (best_luck == 9) break; 
        }

        cout << best_no << endl;
    }

    return 0;
}
