#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int fibo(int n) {
    if (n <= 2) return n - 1;
    return fibo(n - 1) + fibo(n - 2);
}

void solve() {
    int n;
    cin >> n;
    cout << fibo(n) << endl;
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