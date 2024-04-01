#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    int a, b;
    cin >> a >> b;
    if ((a + b) % 3) {
        cout << "NO" << endl;
        return;
    }
    if (a > b * 2 || b > a * 2) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    return;
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    cout.flush();
    return 0;
}