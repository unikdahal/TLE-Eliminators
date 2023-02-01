#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    
    ll n;
    cin>>n;

    vector<ll> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    ll even=0,odd=0,positive=0,negative=0;
    for(int i=0;i<n;i++){
        if(ans[i]>0){
            positive++;
        }else if(ans[i]<0){
            negative++;
        }

        if(ans[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }

    cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<positive<<"\nNegative: "<<negative<<endl;    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}