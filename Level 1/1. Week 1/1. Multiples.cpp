#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll a,b;
    cin>>a>>b;
    if(a%b==0 || b%a==0){
        cout<<"Multiples"<<endl;
        return;
    }
    cout<<"No Multiples"<<endl;

    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
        solve();
    return 0;
}