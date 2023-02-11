#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){
    string s1,s2;
    cin>>s1>>s2;

    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    if(s1==s2)
        cout<<0<<endl;
    else if(s1>s2)
        cout<<1<<endl;
    else
        cout<<-1<<endl;
    
    return;
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}