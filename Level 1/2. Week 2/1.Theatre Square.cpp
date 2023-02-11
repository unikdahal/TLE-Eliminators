#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll n,m,a;
    cin>>n>>m>>a;

    ll ans1=n/a;

    ll ans2=m/a;
    if(n%a!=0){
        ans1++;
    }
    if(m%a!=0){
        ans2++;
    }

    cout<<ans1*ans2<<endl;
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}