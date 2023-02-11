#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll n;
    cin>>n;

    ll countM=0;
    ll countC=0;

    ll temp1,temp2;

    for(int i=0;i<n;i++){

        cin>>temp1>>temp2;

        if(temp1>temp2){
            countM++;
        }else if(temp1<temp2){
            countC++;
        }
    }

    if(countM>countC)
        cout<<"Mishka"<<endl;
    else if(countC>countM)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}