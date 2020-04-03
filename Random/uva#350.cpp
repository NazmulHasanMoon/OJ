#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define ll long long
using namespace std;
int main()
{
    int a,b,c,d,s,t(0);
    while(1)
    {
        sf("%d %d %d %d",&a,&b,&c,&d);
        if(a==0&&b==0&&c==0&&d==0)
            break;
        pf("Case %d: ",++t);
        map<int,int>mp;
        mp.clear();
        s=0;
        while(1)
        {
            d=(((a%c)*(d%c)%c)+(b%c))%c;
            //cout<<d<<' ';
            if(!(mp.find(d)!=mp.end()))
                mp[d]=1,s++;
            else
                break;
        }
        pf("%d\n",s);
    }
    return 0;
}
