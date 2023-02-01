#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;

    vector<int> ans(n+1,true);

    ans[0]=ans[1]=false;

    for(int i=2;i<n+1;i++){
        if(ans[i]){
            cout<<i<<" ";
            for(int j=2;j*i<n+1;j++){
                ans[j*i]=false;
            }
        }
    }

    
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}