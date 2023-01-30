#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    for(int i=l;i<=r;i++){
        int temp=i%10;
        if(temp==2 || temp==3 || temp==9){
            ans++;
        }
    }
    cout<<ans<<endl;

    
    
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