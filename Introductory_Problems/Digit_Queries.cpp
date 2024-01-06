#include <bits/stdc++.h>
#include <string>
using namespace std;
#define int long long int
#define max_N 1000000007
#define pb push_back

int fastPow10(int n)
{
    if(n == 0)
        return 1;
    else if(n%2 == 1)
        return 10*fastPow10(n/2)*fastPow10(n/2);
    else
        return fastPow10(n/2)*fastPow10(n/2);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int count[17];
    count[0] = 9;
    for(int i = 1; i < 17; i++)
    {
        count[i] = (count[i-1]/i)*10*(i+1);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int k, i = 0, sum = 0;
        cin>>k;
        while(k > sum)
        {
            sum += count[i];
            i++;
        }
        int loc = (k-sum+count[i-1]-1)/i;
        int digit = (k-sum+count[i-1]-1)%i;
        int num = fastPow10(i-1) + loc;
        cout<<to_string(num)[digit]<<endl;
    }
    return 0;
}