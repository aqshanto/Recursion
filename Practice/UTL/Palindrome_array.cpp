#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool f = true;
bool palindrome(vector<int>& v, int l, int r) {
    if (l >= r) {
        return true;
    }
    if (v[l] != v[r]) {
        return false;
    }
    return palindrome(v, l + 1, r - 1);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    if (palindrome(v, 0, n - 1) == false)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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