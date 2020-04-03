#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t,n,i(1),j;
    sf("%d",&t);
    while(i<=t)
    {
        sf("%d",&n);
        j=1;
        while(n!=1)
        {
            if(n&1)
                j++;
            n/=2;
        }
        if(j&1)
            pf("Case %d: odd\n",i++);
        else
            pf("Case %d: even\n",i++);
    }
    return 0;
}
