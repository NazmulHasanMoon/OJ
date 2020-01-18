#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int n,k;
    sf("%d %d",&n,&k);
    long long x;
    if(k==0)
        pf("%d\n",n);
    else
    {
        x=10;
        for(int i=1;i<k;i++)
            x*=10;
        cout<<x<<endl;
        pf("%lld\n",x);
    }
    return 0;
}
