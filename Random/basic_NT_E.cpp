#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int n,x,y,T,cs(1);
    sf("%d",&T);
    while(cs<=T)
    {
        sf("%d",&n);
        x=n/5;
        y=n-x;
        x=y+7;
        bool t=false;
        for(int i=y; i<=x; i++)
        {
            int z=i,l(i);
            while(z>=5)
            {
                l+=(z/5);
                z/=5;
            }
            if(l==n)
            {
                t=true;
                pf("Case %d: %d\n",cs++,i*5);
                break;
            }
        }
        if(!t)
            pf("Case %d: impossible\n",cs++);
    }
    return 0;
}
