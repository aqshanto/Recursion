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

void find_combination(int index, vector<int>& v, vector<int>& ds, vector<vector<int>>& ans, int target_sum) {
    if (index == v.size()) {
        if (target_sum == 0) {
            ans.push_back(ds);
        }
        return;
    }
    if (v[index] <= target_sum) {
        ds.push_back(v[index]);
        find_combination(index, v, ds, ans, target_sum - v[index]);
        ds.pop_back();
    }
    find_combination(index + 1, v, ds, ans, target_sum);
}

void solve() {
    int n;
    int target_sum;
    cin >> n >> target_sum;
    vector<int> v(n), ds;
    vector<vector<int>> ans;
    inputarr(v, n);
    find_combination(0, v, ds, ans, target_sum);
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