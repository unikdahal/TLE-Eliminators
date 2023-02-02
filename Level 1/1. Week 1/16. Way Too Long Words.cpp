#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n;
    cin>>n;
    vector<string> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    for(int i=0;i<n;i++){
        int k=ans[i].length();
        if(k<11){
            cout<<ans[i]<<endl;
        }else{
            cout<<ans[i][0]<<k-2<<ans[i][k-1]<<endl;
        }
    }
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}