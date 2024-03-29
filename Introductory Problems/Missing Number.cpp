#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        v[x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] == 0) {
            cout << i << endl;
            break;
        }
    }
    cout.flush();
    return 0;
}