#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

const int MOD = 1e9 + 7;

int power(int base, int exp) {
    if (exp == 0) return 1;
    int ret = exp % 2 == 0 ? 1 : base;
    return (ret * 1ll * power((base * 1ll * base) % MOD, exp / 2)) % MOD;
}

void solve() {
    int n;
    cin >> n;
    cout << power(2, n);
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}