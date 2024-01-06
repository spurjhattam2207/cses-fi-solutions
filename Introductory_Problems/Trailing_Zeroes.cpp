#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define max_N 1000000007

int fastPow5(int n)
{
    if(n==0)
        return 1;
    else if(n%2==1)
        return 5*fastPow5(n/2)*fastPow5(n/2);
    else
        return fastPow5(n/2)*fastPow5(n/2);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int ans = 0, i = 1;
    while(n >= fastPow5(i))
    {
        // cout<<fastPow5(i)<<endl;
        ans += n/fastPow5(i);
        i++;
    }
    cout<<ans<<endl;
    return 0;
}