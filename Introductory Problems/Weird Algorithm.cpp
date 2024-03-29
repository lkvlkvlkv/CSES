#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    long long n;
    cin >> n;
    cout << n << " ";
    while (n > 1) {
        if (n % 2 == 0) {
            n >>= 1;
        }
        else {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
    cout.flush();
    return 0;
}