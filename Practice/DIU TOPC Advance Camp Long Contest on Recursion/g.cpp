#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define inputarr(v, n) \
    for (int i = 0; i < n; i++) cin >> v[i];

#define printarr(v)                    \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";           \
    cout << endl;

//---------------------------------------//

int cnt = 0;
void way(int st, int crnt, int ed) {
    if (crnt >= ed) {
        if (crnt == ed) {
            cnt++;
        }
        return;
    }
    way(st, crnt + 1, ed);
    way(st, crnt + 2, ed);
    way(st, crnt + 3, ed);
}

void solve() {
    int st, ed;
    cin >> st >> ed;
    way(st, st, ed);
    cout << cnt << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1, Case = 1;
    // cin>>t;
    while (t--) {
        // cout << "Case " << Case++ << ": ";
        solve();
    }
    return 0;
}