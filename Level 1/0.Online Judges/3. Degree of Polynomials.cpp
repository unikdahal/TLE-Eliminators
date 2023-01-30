#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n;
    cin>>n;
    vector<ll> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    for(int i=n-1;i>=0;i++){
        if(ans[i]!==0){
            cout<<i<<endl;
            return;
        }
    }
    cout<<0<<endl;    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    long long t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}