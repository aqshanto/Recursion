#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

int fact(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

void solve() {
	int n;
	cin >> n;
	cout << fact(n) << endl;
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