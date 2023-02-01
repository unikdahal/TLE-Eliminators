#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll a,b;
    cin>>a>>b;
    ll count=0;

    for(int i=0;i<=a;i++){
        for(int j=0;j<=a;j++){
            if((b-i-j)>=0 && (b-i-j)<=a){
                count++;
            }    
        }
    }
    cout<<count<<endl;
    
    
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}