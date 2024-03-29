#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    else if (n <= 3) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}