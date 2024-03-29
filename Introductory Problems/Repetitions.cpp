#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int res = 1, cnt = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        }
        else {
            res = max(res, cnt);
            cnt = 1;
        }
    }
    res = max(res, cnt);
    cout << res << endl;
    cout.flush();
    return 0;
}