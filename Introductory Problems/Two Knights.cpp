#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    cout << 0 << endl;
    long long sum = 0;
    for (long long i = 2; i <= n; i++) {
        sum += 8 * (i - 2);
        cout << (i * i) * (i * i - 1) / 2 - sum << endl;
    }
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}