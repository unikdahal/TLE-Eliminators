#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll n;
    cin>>n;

    ll temp=0;
    ll ans=0;
    for(int i=0;i<n-1;i++){
        cin>>temp;
        ans^=temp;
        ans^=i+1;
    }
    ans^=n;
    cout<<ans<<endl;
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}