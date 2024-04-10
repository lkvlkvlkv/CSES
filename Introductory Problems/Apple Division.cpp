#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void backtracking(vector<int> &v, int i, long long &sum, long long &total, long long &res) {
    if (i == v.size()) {
        return;
    }
    if (2 * sum - total > res) {
        return;
    }
    sum += v[i];
    res = min(abs(2 * sum - total), res);
    backtracking(v, i + 1, sum, total, res);
    sum -= v[i];
    backtracking(v, i + 1, sum, total, res);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }
    long long sum = 0, res = total;
    backtracking(v, 0, sum, total, res);
    cout << res << endl;
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}