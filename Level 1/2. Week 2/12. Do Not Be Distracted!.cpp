#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;

void solve(){
    
      ll n;
      cin>>n;

      string s;
      cin>>s;

      map<char,int> mp;
      mp[s[0]]=1;
      for(int i=1;i<n;i++){
            while(s[i-1]==s[i]){
                i++;
            }
            if(mp[s[i]]){
                cout<<"NO"<<endl;
                return;
            }
            mp[s[i]]=1;
      }
      cout<<"YES"<<endl;    
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