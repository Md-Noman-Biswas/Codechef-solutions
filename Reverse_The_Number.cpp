#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"


void reverse(int n){
    int temp = n;
    while(temp){
        cout << temp % 10;
        temp /= 10;
    }
    cout << nl;
}



void solve(){
    int n;
    cin >> n;
    while(1){
        if(n % 10 == 0){
            n /= 10;
        }else{
            break;
        }
    }
    reverse(n);
    
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}