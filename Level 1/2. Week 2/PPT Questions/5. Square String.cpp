#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    string s;
    cin>>s;

    ll a=s.length();
    if(a%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    a=a/2;
    ll i=0;
    while(a<s.length()){
        if(s[i++]!=s[a++]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
    
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