#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define max_N 1000000007
#define pb push_back
#define forL(i,j) for(i = 0; i < j; i++)

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin>>n>>x;
    int i, p[n];
    forL(i, n)
        cin>>p[i];
    sort(p, p + n);
    int q[n];
    forL(i, n)
        q[i] = x - p[n - 1 - i];
    int maxP = 0;
    int a = 0, b = 0;
    bool visited[n];
    forL(i, n)
        visited[i] = false;
    while(a < n && b < n)
    {
        if((p[a] <= q[b]) && (!visited[a]) && (!visited[n - 1 - b]) && (a != n - 1 - b))
        {
            visited[a] = true;
            visited[n - 1 - b] = true;
            // cout<<p[a]<<" and "<<x - q[b]<<" are now pronounced man and wife.\n";
            a++;
            maxP++;
        }
        b++;
    }
    cout<<n - maxP<<endl;
    return 0;
}