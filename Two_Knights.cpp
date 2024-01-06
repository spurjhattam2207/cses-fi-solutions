#include <bits/stdc++.h>
using namespace std;
#define int long long int

int knights(int n)
{
    if(n==1)
        return (n*n*(n*n-1))/2-0;
    if(n==2)
        return (n*n*(n*n-1))/2-6;
    if(n==3)
        return (n*n*(n*n-1))/2-28;
    if(n==4)
        return (n*n*(n*n-1))/2-96;
    if(n==5)
        return (n*n*(n*n-1))/2-252;
    if(n==6)
        return (n*n*(n*n-1))/2-550;
    else
        return knights(n-1) + 4 + 2*(2*n-7) + 2 + 4 + 2 + 2*(2*(n-2)-1-3) + 2;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cout<<(i*i*(i*i-1))/2-knights(i)<<endl;
    }
    return 0;
}