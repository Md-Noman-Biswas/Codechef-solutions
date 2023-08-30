#include<bits/stdc++.h>
using namespace std;
const int N = (1LL << 32);
bitset<N> num = 0;
void solve()
{
    int q, s1, a, b;
    cin >> q >> s1 >> a >> b;
    int sum = 0;
    while (q--)
    {
        int s2 = s1;
        int par = (s2 % 2);
        int t = s2;
        // cout << s2 << endl;
        s2 >>= 1;
        if (par && num[s2] == 0)
        {
            sum += s2;
            num[s2] = 1;
        }
        else if (!par && num[s2] == 1)
        {

            sum -= s2;
            num[s2] = 0;
        }
        s1 = (t * a + b) % N;
    }
    cout << sum << endl;
}
int main(){
    solve();
}