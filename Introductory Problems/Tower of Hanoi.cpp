#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void dfs(int n, int from, int buffer, int to) {
    if (n == 0) {
        return;
    }
    dfs(n - 1, from, to, buffer);
    cout << from << " " << to << endl;
    dfs(n - 1, buffer, from, to);
}

void solve() {
    int n;
    cin >> n;
    int step = 1;
    for (int i = 1; i < n; i++) {
        step = step * 2 + 1;
    }
    cout << step << endl;
    dfs(n, 1, 2, 3);
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}