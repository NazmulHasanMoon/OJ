#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
map<int,int>mp;
int main()
{
    int n,x,i,y(0),z(0),p(0),q(0);
    sf("%d",&n);

    for(i=0; i<n; i++)
    {
        sf("%d",&x);
        mp[x]++;
    }
    map<int,int>::iterator it=mp.begin();
    i=0;
    for(; it!=mp.end()&&i<2; it++,i++)
    {
        if(!i)
            y=it->ff,p=it->ss;
        else
            z=it->ff,q=it->ss;
        n-=it->ss;
        //cout<<it->ss<<endl;
    }
    if(n==0&&y!=z&&i==2&&p==q)
        pf("YES\n%d %d\n",y,z);
    else
        pf("NO\n");
    return 0;
}
