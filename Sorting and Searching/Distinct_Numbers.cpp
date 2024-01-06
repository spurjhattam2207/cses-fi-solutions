#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define int long long int
#define max_N 1000000007
#define pb push_back

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a, a + n);
    vector<int> ans;
    for(auto x: a)
    {
        if(ans.empty())
            ans.pb(x);
        else
            if(ans.back()!=x)
                ans.pb(x);
    }
    cout<<ans.size()<<endl;
    return 0;
}