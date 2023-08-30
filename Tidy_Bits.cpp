#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ans = INT_MAX;
    int cnt = __builtin_popcount(n);
    for(int i=0; i<=n; i++){
        if(__builtin_popcount(i) == cnt){
            ans = min(ans, i);
        }
    }
    cout << ans << "\n";
}
int main(){
    solve();
}