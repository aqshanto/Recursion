#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void WA(int n) {
    cout << n << " ";
    if (n == 1) return;
    if (n % 2 != 0) {
        n *= 3;
        n++;
    } else {
        n /= 2;
    }
    WA(n);
}

void solve() {
    int n;
    cin >> n;
    WA(n);
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}