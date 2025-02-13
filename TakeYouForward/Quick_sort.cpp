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

int func(vector<int>& v, int low, int high) {
    int pivot = v[low];
    int i = low, j = high;
    while (i < j) {
        while (v[i] <= pivot && i <= high) {
            i++;
        }
        while (v[j] > pivot && j >= low) {
            j--;
        }
        if (i < j) swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
}

void quick_sort(vector<int>& v, int low, int high) {
    if (low < high) {
        int partition_index = func(v, low, high);
        quick_sort(v, low, partition_index - 1);
        quick_sort(v, partition_index + 1, high);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    inputarr(v, n);
    quick_sort(v, 0, n - 1);
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