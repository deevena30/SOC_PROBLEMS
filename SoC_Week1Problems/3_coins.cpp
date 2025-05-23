#include <iostream>
using namespace std;

void check(long long n, long long k) {
    if (k == 1) {
        cout << "YES" << endl;
        return;
    }
    if (k % 2 == 1) {
        if (n % 2 == 0) {
            cout << "YES" << endl;
        } else {
            if (n >= k && (n - k) >= 0 && (n - k) % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    } else {
        if (n % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        check(n, k);
    }
    return 0;
}