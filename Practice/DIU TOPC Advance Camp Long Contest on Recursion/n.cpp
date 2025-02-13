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
int digit_count(int n) {
    int cnt = 0, temp = n;
    while (temp != 0) {
        cnt++;
        temp /= 10;
    }
    return cnt;
}
int sum_of_digit(int n) {
    int cnt = 0, temp = n;
    while (temp != 0) {
        cnt += temp % 10;
        temp /= 10;
    }
    return cnt;
}

int f(int n) {
    if (digit_count(n) == 1) {
        return n;
    } else {
        return f(sum_of_digit(n));
    }
}

void solve() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << 2 << endl;
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