#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define sz 55
#define cs(x,y) pf("Case %d: %d\n",x,y)
#define ss second
#define ff first
map<int,int>mp;
int main()
{
    int t,c(1),a,b,n,re;
    sf("%d",&t);

    while(c<=t)
    {
        sf("%d",&n);
        re=1;
        for(int i=0;i<n;i++)
            cin>>a,mp[a]++;
        map<int,int>::iterator it=mp.begin();
        ///cout<<mp.size()<<endl;
        for(;it!=mp.end();it++)
        {
            if(it->ff==1)
                re+=it->ss;
            else if(it->ff!=0&&it->ss%it->ff!=0)
                b=it->ss/it->ff,re+=(b+1)*it->ff;
            else if(it->ff>0)
                re+=it->ss;
        }
        cs(c++,re);
        mp.clear();
    }
    return 0;
}
