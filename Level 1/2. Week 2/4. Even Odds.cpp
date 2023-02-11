#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll n;
    cin>>n;

    ll k;
    cin>>k;

    if(n%2==0){

        if(k<=n/2){
            cout<<2*k-1<<endl;
        }
        else{
            cout<<2*(k-n/2)<<endl;
        }
    }else{

        if(k<=n/2+1){
            cout<<2*k-1<<endl;
        }
        else{
            cout<<2*(k-n/2-1)<<endl;
        }
    }
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}