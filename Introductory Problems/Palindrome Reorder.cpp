#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
    string s;
    cin >> s;
    vector<int> count(26);
    for (auto &x : s) {
        count[x - 'A']++;
    }
    char mid = '\0';
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2) {
            if (mid != '\0') {
                cout << "NO SOLUTION" << endl;
                return;
            }
            mid = i + 'A';
        }
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i] / 2; j++) {
            cout << char(i + 'A');
        }
    }
    if (mid != '\0') {
        cout << mid;
    }
    for (int i = 25; i >= 0; i--) {
        for (int j = 0; j < count[i] / 2; j++) {
            cout << char(i + 'A');
        }
    }
    cout << endl;
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}