#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll ans=INT_MIN;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>ans){
            ans=a[i];
        }
    }

    cout<<ans<<endl;

    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}