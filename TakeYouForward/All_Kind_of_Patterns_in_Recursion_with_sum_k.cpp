#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define printarr(v)                    \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";           \
    cout << endl;

//---------------------------------------//

int n, sum;
void printPattern(int index, vector<int>& ds, vector<int>& v, int s) {
    if (index >= v.size()) {
        if (s == sum) {
            for (int i = 0; i < ds.size(); i++) {
                cout << ds[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(v[index]);
    s += v[index];
    // taking the value
    printPattern(index + 1, ds, v, s);
    ds.pop_back();
    s -= v[index];
    // not taking the value
    printPattern(index + 1, ds, v, s);
}

void solve() {
    cin >> n >> sum;
    vector<int> v(n), ds;
    for (int i = 0; i < n; i++) cin >> v[i];
    printPattern(0, ds, v, 0);
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