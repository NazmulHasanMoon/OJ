#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t,i(1);
    sf("%d",&t);
    int x1,x2,y1,y2,n;
    while(i<=t)
    {
        sf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&n);
        int a,b;
        pf("Case %d:\n",i++);
        while(n--)
        {
            sf("%d %d",&a,&b);
            if(a>=x1&&a<=x2&&b>=y1&&b<=y2)
                pf("Yes\n");
            else
                pf("No\n");
        }
    }
    return 0;
}
