#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> arr(n);
    vector<int> ans;
    for(int i=0; i<n; i++) cin >> arr[i];
    if(n == 1){
        cout << 1 << "\n";
        return;
    }
    int mini = INT_MAX;
    for(int i=0; i<n-1; i++){
        mini = min(arr[i], mini);
        if(arr[i+1] <= mini){
            cnt++;
        }
    }
    cout << ++cnt << "\n";
    
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