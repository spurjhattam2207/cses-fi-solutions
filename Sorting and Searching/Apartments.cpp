#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define int long long int
#define max_N 1000000007
#define pb push_back
#define forL(i,j) for(i = 0; i < j; i++)

bool comp(pair<int, int> a, int b)
{
    if(b >= a.first && b <= a.second)
        return true;
    return false;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k, p;
    cin>>n>>m>>k;
    int a[n], b[m];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < m; i++)
        cin>>b[i];
    sort(a, a + n);
    sort(b, b + m);
    pair<int, int> acopy[n];
    forL(p, n)
        acopy[p] = make_pair(a[p] - k, a[p] + k);
    int j = 0;
    int count = 0;
    p = 0;
    while(p < n && j < m)
    {
        // cout<<"meow\n";
        // cout<<acopy[p].first + k<<endl;
        // cout<<b[j]<<endl;
        if(comp(acopy[p], b[j]))
        {
            count++;
            // cout<<"count badha\n";
            j++;
            p++;
        }
        else 
        {
            if(b[j] > acopy[p].second)
                p++;
            else
                j++;
        }
    }
    cout<<count<<endl;
    return 0;
}