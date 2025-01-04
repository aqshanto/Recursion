#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;
int n = 1;
void odd();
void even();
void odd() {
	if (n <= 10) {
		printf("%d\n", n + 1);
		n++;
		even();
	}
	return;
}

void even() {
	if (n <= 10) {
		printf("%d\n", n - 1);
		n++;
		odd();
	}
	return;
}

void solve() {
	odd();
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