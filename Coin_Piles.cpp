#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define max_N 1000000007
#define pb push_back

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if((a+b)%3==0&&(2*a>=b)&&(2*b>=a))
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}