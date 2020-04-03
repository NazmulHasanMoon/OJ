#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
int main()
{
    int t;
    sf("%d",&t);
    while(t--)
    {
        int n,a,s(0);
        map<int,int>mp;
        sf("%d",&n);
        for(int i=0;i<n;i++)
        {
            sf("%d",&a);
            mp[a]++;
        }
        map<int,int>::iterator it=mp.begin();
        for(;it!=mp.end();it++)
            s+=it->ss-1;
        cout<<s<<endl;
    }
    return 0;
}
