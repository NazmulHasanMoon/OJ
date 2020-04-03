#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t,n;
    sf("%d",&t);
    while(t--)
    {
        sf("%d",&n);
        int a,b;
        a=n/2;
        b=n-a;
        pf("%d %d\n",a,b);
    }
    return 0;
}
