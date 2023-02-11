#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll n;
    cin>>n;

    ll i=2;
    while(true){
        //pow(2,i) === (1<<i)
        ll temp=(1<<i)-1;


        if(n%temp==0){
            cout<<n/temp<<endl;
            return;
        }
        i++;
    }
    
    
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