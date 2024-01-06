#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%4==0 || n%4==3)
    {
        cout<<"YES\n";
        if(n%4==0)
        {
            cout<<n/2<<endl;
            for(int i=1;i<=n/4;i++)
            {
                cout<<i<<" "<<n+1-i<<" ";
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(int i=1;i<=n/4;i++)
            {
                cout<<i+n/4<<" "<<n+1-i-n/4<<" ";
            }
            cout<<endl;
        }
        else if(n>8)
        {
            cout<<(n+1)/2<<endl;
            cout<<"1 2 ";
            for(int i=4;i<=((n-3)/4+3);i++)
            {
                cout<<i<<" "<<n+4-i<<" ";
            }
            cout<<endl;
            cout<<(n-1)/2<<endl;
            cout<<"3 ";
            for(int i=4;i<=((n-3)/4+3);i++)
            {
                cout<<i-3+((n-3)/4+3)<<" "<<n+7-i-((n-3)/4+3)<<" ";
            }
            cout<<endl;
        }
        else if(n==7)
        {
            cout<<"4\n";
            cout<<"1 2 4 7\n";
            cout<<"3\n";
            cout<<"3 5 6\n";
        }
        else
        {
            cout<<"2\n";
            cout<<"1 2\n";
            cout<<"1\n";
            cout<<"3\n";
        }
    }
    else
    {
        cout<<"NO\n";
    }
}