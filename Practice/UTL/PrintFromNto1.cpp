#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void printnum(int n) {
    if (n == 0) return;
    cout << n;
    if (n != 1)
        cout << " ";
    else
        cout << endl;
    printnum(n - 1);
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