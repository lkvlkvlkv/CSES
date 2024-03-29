#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    int row, col;
    cin >> row >> col;
    int diagonal = max(row, col);
    long long base = 1LL * (diagonal - 1) * (diagonal - 1);
    if (diagonal % 2 == 1) {
        cout << base + col + diagonal - row << endl;
        return;
    }
    cout << base + row + diagonal - col << endl;
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