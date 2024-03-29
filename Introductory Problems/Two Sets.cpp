#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    long long n;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2) {
        cout << "NO" << endl;
        return;
    }
    vector<int> st1, st2;
    int start = 1;
    if (n % 4 == 3) {
        st1.push_back(1);
        st1.push_back(2);
        st2.push_back(3);
        start = 4;
    }
    for (int i = start; i <= n; i += 4) {
        st1.push_back(i);
        st1.push_back(i + 3);
        st2.push_back(i + 1);
        st2.push_back(i + 2);
    }
    cout << "YES" << endl;
    cout << st1.size() << endl;
    for (auto &x : st1) {
        cout << x << " ";
    }
    cout << endl;
    cout << st2.size() << endl;
    for (auto &x : st2) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}