#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll n;
    cin>>n;
    ll count=0;

    while(n!=0){
        if(n%2==1){
            count++;
        }
        n/=2;
    }
    ll sum=0;
    for(int i=0;i<count;i++){
        sum+=pow(2,i);
    }
    cout<<sum<<endl;
    
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