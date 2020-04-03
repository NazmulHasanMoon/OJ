#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sp(x) setprecision(x)
int x[25],y[25];
int main()
{
    int b,n;
    while(sf("%d %d",&b,&n))
    {
        if(!b&&!n)
            break;
        for(int i=1; i<=b; i++)
            sf("%d",&x[i]);
        for(int i=1; i<=n; i++)
        {
            int d,c,v;
            sf("%d %d %d",&d,&c,&v);
            x[d]-=v;
            x[c]+=v;
        }
        bool t=true;
        for(int i=1; i<=b; i++)
        {
            if(x[i]<0)
            {
                t=false;
                break;
            }
        }
        if(t)
            pf("S\n");
        else
            pf("N\n");
    }
    return 0;
}
