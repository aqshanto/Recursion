#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void digit(int n) {
    if (n / 10 == 0) {
        cout << n % 10 << " ";
        return;
    }
    digit(n / 10);
    cout << n % 10 << " ";
}

void solve() {
    int n;
    cin >> n;
    digit(n);
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}