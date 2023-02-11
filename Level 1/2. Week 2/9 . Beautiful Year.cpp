#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll MOD = 1e9+7;
const ll INF= LLONG_MAX>>1;

bool checkDistinctE(int n){
    int arr[10]={0};
    ll count=0;
    while(n!=0){
        int rem=n%10;
        if(arr[rem]==0){
            arr[rem]=1;
            count++;
        }
        n=n/10;


    }
    if(count==4)
        return 1;
    return 0;
    
}


void solve(){
    
    
    ll n;
    cin>>n;
    n++;
    while(true){
        if(checkDistinctE(n)){
            cout<<n<<endl;
            return;
        }
        n++;
    }


    
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}