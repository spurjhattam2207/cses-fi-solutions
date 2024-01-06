#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define max_N 1000000007

signed spePow(int n)
{
    int ans = 1;
    for(int i = 0; i < n; i++)
    {
        ans = (ans * 2)%max_N;
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<spePow(n)<<endl;
    return 0;
}