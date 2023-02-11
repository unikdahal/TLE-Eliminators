#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll n;
    cin>>n;

    vector<ll> ans(n);
    ans[0]=2;
    if(n/2%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
        return;
    }

    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }

    for(int i=1;i<n-1;i+=2){
        cout<<i<<" ";
    }

    cout<<n-1+n/2<<endl;
    
    
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