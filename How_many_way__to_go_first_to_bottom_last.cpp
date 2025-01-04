#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

int grid_count(int n, int m) {
	if (n == 1 || m == 1) {
		return 1;
	} else {
		return grid_count(n, m - 1) + grid_count(n - 1, m);
	}
}

void solve() {
	int n, m;
	cin >> n >> m;
	cout << grid_count(n, m) << endl;
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