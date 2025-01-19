#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void printnum(int n) {
    if (n != 1)
        printnum(n - 1);
    cout << n << endl;
}

void solve() {
    int n;
    cin >> n;
    printnum(n);
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