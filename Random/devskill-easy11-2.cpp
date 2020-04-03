#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i(1);
    scanf("%d",&t);
    while(i<=t)
    {
        long long n,m,s;
        scanf("%lld %lld",&n,&m);
        bool T=true;
        if(n==1)
            T=false;
        s=m-n;
        if((s%2!=0&&T)||(s%2==0&&!T))
            printf("Case %d: Even\n",i);
        else
            printf("Case %d: Odd\n",i);
        i++;
    }
    return 0;
}
