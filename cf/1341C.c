#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define sz 100001
int p[sz],arr[sz];
int main()
{
    int t,n;
    sf("%d",&t);
    while(t--)
    {
        sf("%d",&n);
        for(int i=1;i<=n;i++)
            sf("%d",&p[i]);
        int flag=1;
        for(int i=1;i<n&&flag;i++)
        {
            if(p[i]<p[i+1]&&p[i]+1!=p[i+1])
                flag=0;
        }
        if(!flag)
            pf("No\n");
        else
            pf("Yes\n");
    }
    return 0;
}
