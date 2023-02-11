#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    
    string s;
    cin>>s;

    bool one=true;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(one && s[i]=='1'){
            count++;
        }else if(one && s[i]=='0'){
            one=false;
            count=1;
        }else if(!one && s[i]=='0'){
            count++;
        }else{
            one=true;
            count=1;
        }

        if(count>=7){
            cout<<"YES"<<endl;
            return;
        }
            
    }
    cout<<"NO"<<endl;
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}