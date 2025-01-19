#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void printr(int n) {
    if (n == 0) return;
    cout << "I love Recursion" << endl;
    printr(n - 1);
}

void solve() {
    int n;
    cin >> n;
    printr(n);
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