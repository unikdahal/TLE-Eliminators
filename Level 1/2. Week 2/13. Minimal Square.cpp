#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll a,b;
    cin>>a>>b;

    ll maxi=max(a,b);
    ll mini=min(a,b);

    ll ans=max(2*mini,maxi);

    cout<<ans*ans<<endl;
    
    
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