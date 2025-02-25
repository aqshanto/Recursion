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

bool ispossible(int index, int sum, int target_sum, vector<int>& v) {
    if (index >= v.size()) {
        if (sum == target_sum) {
            return true;
        }
        return false;
    }
    sum += v[index];
    if (ispossible(index + 1, sum, target_sum, v)) {
        return true;
    }
    sum -= v[index];
    sum -= v[index];
    if (ispossible(index + 1, sum, target_sum, v)) return true;
    return false;
}

void solve() {
    int n, target_sum;
    cin >> n >> target_sum;
    vector<int> v(n);
    inputarr(v, n);
    if (ispossible(0, 0, target_sum, v)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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