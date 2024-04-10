#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt=0;
    do {
        cnt++;
    } while (next_permutation(s.begin(), s.end()));
    sort(s.begin(), s.end());
    cout << cnt << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}