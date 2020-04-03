#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 1000
int a[sz];
int main()
{
    int n,k,x,s(0);
    sf("%d %d %d",&n,&k,&x);
    for(int i=1;i<=n;i++)
        sf("%d",&a[i]);
    int y=n-k;
    s+=(k*x);
    for(int i=1;i<=y;i++)
        s+=a[i];
    pf("%d\n",s);
    return 0;
}
