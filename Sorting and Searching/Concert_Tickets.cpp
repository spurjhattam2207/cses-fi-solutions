#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define max_N 1000000007
#define pb push_back
#define forL(i,j) for(i = 0; i < j; i++)

bool Comp(int a, int b)
{
    return a>b;
}

signed main()
{
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    multiset<int>v;
    
    for(int i=0;i<n;i++) {
        int tp;
        cin>>tp;
        v.insert(tp);
    }
    int b;
    for(int i=0;i<m;i++){
        cin>>b;
        //auto iter = lower_bound(v.rbegin(), v.rend(), b, std::greater<int>());
        auto iter = v.upper_bound(b);
        if(iter == v.begin())
            cout<<-1<<endl;
        else{
            cout<<*(--iter)<<endl;
            //auto it = v.find(*(--iter));
            v.erase(iter);
        }
    }

    return 0;

}

