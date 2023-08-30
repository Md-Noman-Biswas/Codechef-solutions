#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"


void solve(){
    string a;
    string b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt = 0;
    for(int i = 0; i < b.size(); i++){
        if(binary_search(a.begin(), a.end(), b[i])){
            cnt++;
        }
    }
    cout << cnt << nl;
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