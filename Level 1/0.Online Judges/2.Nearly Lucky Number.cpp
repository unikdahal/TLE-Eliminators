#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n;
    cin>>n;

    ll cnt=0;
    while(n>0){
        int rem=n%10;
        if(rem==4 || rem==7)cnt++;
        n/=10;
    }
    if(cnt==0){cout<<"NO"<<endl;return;}
    while(cnt>0){
        int rem=cnt%10;
        if(rem!=7 && rem!=4){
            cout<<"NO"<<endl;
            return;
        }
        cnt/=10;
    }
    cout<<"YES"<<endl;
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}