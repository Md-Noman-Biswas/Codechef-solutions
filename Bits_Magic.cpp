#include<bits/stdc++.h>
using namespace std;
void solve()
{
    unsigned int n;
    cin >> n;
    unsigned int k;
    cin >> k;
    for(int i=31; i>=0; i--){
        if(i == (k)){
            n = (n | ((unsigned int)1<<k));
        }
    }
    cout << n << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}