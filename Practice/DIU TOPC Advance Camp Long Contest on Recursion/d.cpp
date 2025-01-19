#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void print(int n, int x) {
    if (n == 0) return;
    print(n - 1, x + 1);
    for (int i = 0; i < x; i++) {
        cout << " ";
    }
    for (int i = 0; i < 2 * n - 1; i++) {
        cout << "*";
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    print(n, 0);
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