#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void forward(string &prefix, int n);

void reverse(string &prefix, int n) {
    if (n == 0) {
        cout << prefix << endl;
        return;
    }
    prefix.push_back('1');
    forward(prefix, n - 1);
    prefix.pop_back();
    prefix.push_back('0');
    reverse(prefix, n - 1);
    prefix.pop_back();
}

void forward(string &prefix, int n) {
    if (n == 0) {
        cout << prefix << endl;
        return;
    }
    prefix.push_back('0');
    forward(prefix, n - 1);
    prefix.pop_back();
    prefix.push_back('1');
    reverse(prefix, n - 1);
    prefix.pop_back();
}

void solve() {
    int n;
    cin >> n;
    string prefix = "";
    forward(prefix, n);
}

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    solve();
    cout.flush();
    return 0;
}