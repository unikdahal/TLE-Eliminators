#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;
void solve(){

    int arr[5][5];
    int x=0,y=0;
    bool con=true;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                x=i+1;
                y=j+1;
                con=false;
                break;
            }
        }
        if(!con)
            break;
    }
    cout<<abs(3-x)+abs(3-y)<<endl;

    
    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}