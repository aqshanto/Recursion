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

void pp(vector<int>& v,vector<int>& ch,vector<int>& ds, int n){
    if(ds.size()==n){
        for(int i=0;i<ds.size();i++){
            cout<<ds[i]<<" ";
        }cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(ch[i]==0){
            ch[i]=1;
            ds.push_back(v[i]);
            pp(v,ch,ds,n);
            ds.pop_back();
            ch[i]=0;
        }
    }
}

void solve() {
    int n;
    cin>>n;
    vector<int>ds,v(n),ch(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    pp(v,ch,ds,n);
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