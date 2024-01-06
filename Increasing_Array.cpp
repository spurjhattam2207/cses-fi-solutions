#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int n;
    cin>>n;
    int a[n];
    int b = n, i = 0;
    while(b--)
    {
        cin>>a[i];
        i++;
    }
    int moves = 0;
    for(i = 1; i < n; i++)
    {
        if(a[i]<a[i-1])
        {
            moves += a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }
    cout<<moves<<endl;
}