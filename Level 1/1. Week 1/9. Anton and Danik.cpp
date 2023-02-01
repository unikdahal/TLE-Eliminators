#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll a=0;
    ll d=0;

    for(ll i=0;i<n;i++){
        if(s[i]=='A')
            a++;
        else
            d++;
    }

    if(a>d)
        cout<<"Anton"<<endl;
    else if(a<d)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}