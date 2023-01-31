#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n;
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0 && i!=n && n!=2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}