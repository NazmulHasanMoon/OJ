#include<bits/stdc++.h>
using namespace std;
#define sz 10000
#define sf scanf
#define pf printf
#define ss second
#define ff first
int main()
{
    int n,s,c,x;
    s=c=0;
    sf("%d",&n);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        sf("%d",&x);
        mp[x]++;
    }
    for(auto i:mp)
    {
        s=max(s,i.ss);
    }
    pf("%d\n",s);
    return 0;
}
