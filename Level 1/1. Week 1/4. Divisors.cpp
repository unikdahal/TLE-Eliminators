#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}