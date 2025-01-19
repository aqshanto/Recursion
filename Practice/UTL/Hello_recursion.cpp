#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int sumofarr(vector<int> v, int i, int n) {
    if (i == n) return 0;
    return v[i] + sumofarr(v, i + 1, n);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << sumofarr(v, 0, n) << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        cout << "Case " << k << ": ";
        solve();
    }
    return 0;
}