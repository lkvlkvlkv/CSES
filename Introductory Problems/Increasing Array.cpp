#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v) {
        cin >> x;
    }
    long long res = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            res += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << res << endl;
    cout.flush();
    return 0;
}