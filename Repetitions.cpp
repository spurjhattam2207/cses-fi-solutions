#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=1, maxM=1, count=1;
    while(n!=s.length())
    {
        if(s[n]==s[n-1])
        {
            count++;
        }
        else 
        {
            maxM = max(count, maxM);
            count = 1;
        }
        n++;
        if(n==s.length())
            maxM = max(count, maxM);
    }
    cout<<maxM<<endl;
    return 0;
}