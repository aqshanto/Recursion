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

void merge(int low, int mid, int high, vector<int>& v) {
    int i = low, j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= high) {
        if (v[i] <= v[j])
            temp.push_back(v[i++]);
        else
            temp.push_back(v[j++]);
    }
    while (i <= mid) {
        temp.push_back(v[i++]);
    }

    while (j <= high) {
        temp.push_back(v[j++]);
    }
    for (int i = low; i <= high; i++) {
        v[i] = temp[i - low];
    }
}

void mergesorT(int low, int high, vector<int>& v) {
    if (low >= high) {
        return;
    }
    int mid = (high - low) / 2 + low;
    mergesorT(low, mid, v);
    mergesorT(mid + 1, high, v);
    merge(low, mid, high, v);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    mergesorT(0, n - 1, v);
    printarr(v);
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