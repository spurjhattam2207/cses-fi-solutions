#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define max_N 1000000007
#define pb push_back

void towerOfHanoi(int n, int from, int to, int via)
{
    if(n == 1)
        cout<<from<<" "<<to<<endl;
    else if(n == 2)
    {
        cout<<from<<" "<<via<<endl<<from<<" "<<to<<endl<<via<<" "<<to<<endl;
    }
    else 
    {
        towerOfHanoi(n-1, from, via, to);
        cout<<from<<" "<<to<<endl;
        towerOfHanoi(n-1, via, to, from);
    }
}

signed fastPow2(int n)
{
    if(n==0)
        return 1;
    else if(n%2==1)
        return 2*fastPow2(n/2)*fastPow2(n/2);
    else
        return fastPow2(n/2)*fastPow2(n/2);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<fastPow2(n)-1<<endl;
    towerOfHanoi(n, 1, 3, 2);
    return 0;
}