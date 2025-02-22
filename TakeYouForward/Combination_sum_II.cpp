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

void find_combination(int index, int target, vector<int>& v, vector<int>& ds, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(ds);
        return;
    }
    for (int i = index; i < v.size(); i++) {
        if (i > index && v[i] == v[i - 1]) continue;
        if (v[i] > target) break;
        ds.push_back(v[i]);
        find_combination(i + 1, target - v[i], v, ds, ans);
        ds.pop_back();
    }
}

void solve() {
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    inputarr(v, n);
    vector<vector<int>> ans;
    vector<int> ds;
    find_combination(0, target, v, ds, ans);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
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