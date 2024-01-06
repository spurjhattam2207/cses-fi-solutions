#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int a[n+1];
    int sum=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<(n*(n+1))/2-sum<<endl;
}