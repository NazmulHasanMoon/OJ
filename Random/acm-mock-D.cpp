#include<iostream>
#include<algorithm>
#include<cstdio>
#define sz 100005
long long x[sz];
using namespace std;
int main()
{
    int i,t;
    long long n,j,k,y,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%I64d",&n);
        y=-3200;
        for(j=0;j<n;j++)
            scanf("%I64d",&x[j]);
        for(j=0;j<n;j++)
        {
            l=0;
            for(k=0;k<n;k++)
            {
                if(x[j]==x[k]){
                    l++;
                }
            }
            if(y<l)
                y=l;
        }
        printf("Case %d: %I64d\n",i,y);
        //sort(x,x+n);
        //k=x[n-1];
        /*for(j=n-1;j>=0;j--)
        {
            if(k==x[j])
                l++;
            if(x[j]<k)
                break;
        }
        printf("%I64d\n",l);*/
    }
    return 0;
}
