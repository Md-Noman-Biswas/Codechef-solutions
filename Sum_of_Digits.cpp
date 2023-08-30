#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"


int sum(int n){
    int temp = n;
    int sum = 0;
    while(temp){
        sum += (temp % 10);
        temp /= 10;
    }
    return sum;
}



void solve(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        cout << sum(x) << nl;
    }
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}