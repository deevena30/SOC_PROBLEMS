#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll maxReward(ll n, vector<pair<ll, ll>> &tasks) {
    sort(tasks.begin(), tasks.end());

    ll finishingtime = 0;
    ll maxreward = 0;

    for (auto &pair : tasks) {
        finishingtime += pair.first;
        ll reward = pair.second - finishingtime;
        maxreward += reward;
    }

    return maxreward;
}

int main() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> tasks;

    for (int i = 0; i < n; i++) {
        ll duration, deadline;
        cin >> duration >> deadline;
        tasks.push_back({duration, deadline});
    }

    cout << maxReward(n, tasks);
}
