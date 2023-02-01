#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    ll l,r;
    cin>>l>>r;

    ll a,b;

    if(r>l){
        a=l;
        b=r;
    }else{
        a=r;
        b=l;
    }

    ll sum1=a*(a+1)/2;
    ll sum2=b*(b+1)/2;
    ll sum=abs(sum2-sum1+a);

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