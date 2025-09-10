#include<bits/stdc++.h>
using namespace std;
#define int long long
int mx = INT_MIN;

void maxsum(vector<vector<int>>&v,int sum,int i,int j,int n,int m){
	// cout<<mx<<endl;
	if(i==n-1 && j==m-1){
		mx = max(mx, sum+v[i][j]);
		return;
	}
	if(j+1!=m){
		maxsum(v,sum+v[i][j],i,j+1,n,m);
	}
	if(i+1!=n){
		maxsum(v,sum+v[i][j],i+1,j,n,m);
	}
}

void solve(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>v(n,vector<int>(m,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	maxsum(v,0,0,0,n,m);
	cout<<mx<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
}