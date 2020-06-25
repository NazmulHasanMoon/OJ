
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
typedef long long ll;
int main()
{
    int mn,mm;
    mn=mm=INT_MAX;
    int a,b,c,n,t(0);
    sf("%d %d %d %d",&n,&a,&b,&c);
    if(n==1)
        pf("0\n");
    else
    {
        mn=min(mn,a);
        mn=min(mn,b);
        mm=min(mm,b);
        mm=min(mm,c);
        t=mn+((n-2)*min(mm,mn));
        pf("%d\n",t);
    }
    return 0;
}

