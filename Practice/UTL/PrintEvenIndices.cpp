#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void printeven(vector<int> v, int i) {
    if (i % 2 != 0) {
        i--;
    }
    if (i < 0) return;
    cout << v[i] << " ";
    printeven(v, i - 2);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    printeven(v, n - 1);
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