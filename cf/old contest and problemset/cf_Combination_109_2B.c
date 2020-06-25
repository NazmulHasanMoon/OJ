#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,n,x,y,s,s2,count,a[1000],b[1000];
    while(scanf("%d",&n)!=EOF)
    {
        x=0;y=0;s=0;s2=0;j=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
            s+=a[i];
            s2+=b[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]==0)
                x++;
            if(b[i]==0)
                x++;
        }
        for(i=0;i<x;i++)
        {
            if(s2!=0)
            {
                s2--;
                continue;
            }
            else
            {
                s--;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
