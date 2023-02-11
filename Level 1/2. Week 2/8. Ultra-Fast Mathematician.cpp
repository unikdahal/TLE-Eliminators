#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    string n1,n2;
    cin>>n1>>n2;
    string ans="";
    int n=n1.length()-1;

    for(int i=n;i>=0;i--){


        if(n1[i]!=n2[i]){
            ans="1"+ans;
        }else{
            ans="0"+ans;
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