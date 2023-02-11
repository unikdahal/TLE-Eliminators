#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    ll n;
    cin>>n;

    unordered_map<int,int> mp;

    ll temp;

    for(int i=0;i<n;i++){
        cin>>temp;
        mp[temp]++;
    }

    for(int i=0;i<n;i++){
        cin>>temp;
        if(mp[temp]>0){
            mp[temp]--;
        }else{
            cout<<"no"<<endl;
            return;
        }
    }

    cout<<"yes"<<endl;
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}