#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll a=0,c=0,g=0,t=0;
    string s;
    cin>>s;
    ll ans=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            a++;
            ans=max(ans,a);
            c=0;
            g=0;
            t=0;
        }else if(s[i]=='T'){
            t++;
            ans=max(ans,t);
            c=0;
            g=0;
            a=0;
        }else if(s[i]=='C'){
            c++;
            ans=max(ans,c);
            a=0;
            g=0;
            t=0;
        }else{
            g++;
            ans=max(ans,g);
            c=0;
            a=0;
            t=0;
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