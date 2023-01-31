#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    vector<ll> ans(3);
    cin>>ans[0]>>ans[1]>>ans[2];
    vector<ll> ans1=ans;

    sort(ans.begin(),ans.end());
    for(int i=0;i<3;i++){
        cout<<ans[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<ans1[i]<<endl;
    }

    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}