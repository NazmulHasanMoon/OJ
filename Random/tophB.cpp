#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
typedef long long ll;
ll bigmod(int a,int b,int m)
{
    if(b==0)
        return 1%m;
    if(b%2==0)
    {
        int x=bigmod(a,b/2,m);
        return (x*x)%m;
    }
    else
        return ((a%m)*bigmod(a,b-1,m))%m;
}
int main()
{
    int a,b,m;

    while(1)
    {
        sf("%d %d %d",&a,&b,&m);
        if(!a&&!b&&!m)
            break;
        pf("%d\n",bigmod(a,b,m));
    }
    return 0;
}


