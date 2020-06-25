#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
int main()
{
    int n,x;
    sf("%d",&n);
    map<int,int>mp,mm;
    for(int i=0;i<n;i++)
    {
        sf("%d",&x);
        mp[x]++;
    }
    n--;
    for(int i=0;i<n;i++)
    {
        sf("%d",&x);
        mp[x]--;
        mm[x]++;
    }
    for(auto i:mp)
    {
        if(i.ss>0)
            cout<<i.ff<<endl;
    }
    n--;
    for(int i=0;i<n;i++)
    {
        sf("%d",&x);
        mm[x]--;
    }
    for(auto i:mm)
    {
        if(i.ss>0)
            cout<<i.ff<<endl;
    }
    return 0;
}
