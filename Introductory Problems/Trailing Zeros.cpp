#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    int five = 0;
    while (n) {
        five += n / 5;
        n /= 5;
    }
    cout << five << endl;
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}