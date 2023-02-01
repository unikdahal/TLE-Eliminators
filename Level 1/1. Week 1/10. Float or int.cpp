#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    
    float a;
    cin>>a;

    if(a==(int)a)
        cout<<"int "<<(int)a<<endl;
    else
        cout<<"float "<<(int)a<<" "<<a-(int)a<<endl;
    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}