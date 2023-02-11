#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll n;
    cin>>n;

    ll countEven=0;
    ll countOdd=0;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;

        if(temp%2==0){
            countEven++;
        }else{
            countOdd++;
        }
    }

    if(n%2!=0){
        cout<<-1<<endl;
        return;
    }
    
    cout<<abs(countEven-countOdd)/2<<endl;
    
    
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