#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll temp=pow(a,b);
    ll temp1=pow(c,d);

    if(a==c && b==d){
        cout<<"NO"<<endl;
        return;
    }

    if(a>c && b>d){
        cout<<"YES"<<endl;
        return;
    }else if(c>a && d>b){
        cout<<"NO"<<endl;
        return;
    }

    if(b*log(a)>d*log(c))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}