#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    ll x=max(x1,x2);
    ll y=min(y1,y2);

    if(y<x){
        cout<<"-1"<<endl;
        return;
    }

    cout<<x<<" "<<y<<endl;
    
    
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}