#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool isposi(int n, int i) {
    if (i == n)
        return true;
    else if (i > n)
        return 0;
    return isposi(n, i * 10) || isposi(n, i * 20);
}

void solve() {
    int n;
    cin >> n;
    if (isposi(n, 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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