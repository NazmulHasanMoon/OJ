#include<stdio.h>
int main()
{
    int n,k,s,b,count,r;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        s=n;
        count=0;
        while(s>=k)
        {
            b=s/k;
            r=s%k;
            s=b+r;
            count+=b;
        }
    printf("%d\n",n+count);
    }
    return 0;
}

