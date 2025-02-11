// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl "\n"
// #define printarr(v)                    \
//     for (int i = 0; i < v.size(); i++) \
//         cout << v[i] << " ";           \
//     cout << endl;

// //---------------------------------------//
// int n;

// void pSub(int index, vector<int>& ds, vector<int>& v, int n) {
//     if (index == n) {
//         for (int i = 0; i < ds.size(); i++) {
//             cout << ds[i] << " ";
//         }
//         if (ds.size() == 0) cout << "[]";
//         cout << endl;
//         return;
//     }
//     // take or pick the particular index into the subsequence
//     ds.push_back(v[index]);
//     pSub(index + 1, ds, v, n);

//     // not take or pick the particular index into the subsequence
//     ds.pop_back();
//     pSub(index + 1, ds, v, n);
// }

// void psubRev(int index, vector<int>& ds, vector<int>& v, int n) {
//     if (index == n) {
//         for (int i = 0; i < ds.size(); i++) {
//             cout << ds[i] << " ";
//         }
//         if (ds.size() == 0) cout << "[]";
//         cout << endl;
//         return;
//     }
//     // not take or pick the particular index into the subsequence
//     pSub(index + 1, ds, v, n);

//     // take or pick the particular index into the subsequence
//     ds.push_back(v[index]);
//     pSub(index + 1, ds, v, n);

//     ds.pop_back();
// }

// void solve() {
//     cin >> n;
//     vector<int> v(n), ds;
//     for (int i = 0; i < n; i++) cin >> v[i];
//     pSub(0, ds, v, n);
//     cout << endl
//          << "IN REVERSE ORDER" << endl;

//     // IN REVERSE ORDER
//     vector<int> ds1;
//     psubRev(0, ds1, v, n);
// }

// signed main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t = 1;
//     // cin>>t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

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

vector<int> ds;
void printpattern(int i, vector<int> v, int n) {
    if (i >= n) {
        for (int j = 0; j < ds.size(); j++) {
            cout << ds[j] << " ";
        }
        if (ds.size() == 0) cout << "[]";
        cout << endl;
        return;
    }
    printpattern(i + 1, v, n);
    ds.push_back(v[i]);
    printpattern(i + 1, v, n);
    ds.pop_back();
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    printpattern(0, v, n);
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