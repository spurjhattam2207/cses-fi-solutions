#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed euclidean(int x1, int y1, int x2, int y2)
{
    return abs(x1-x2)+abs(y1-y2);
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>y>>x;
        int maxM = max(x,y);
        if(maxM%2)
        {
            cout<<maxM*maxM-euclidean(1, maxM, y, x)<<endl;
        }
        else 
        {
            cout<<maxM*maxM-euclidean(maxM, 1, y, x)<<endl;
        }
    }
    return 0;
}