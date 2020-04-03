#include<stdio.h>
int main()
{
    int i,s,n,x,t;
    while(scanf("%d",&n)!=EOF)
    {
        s=0;
        i=1;
        x=n;
        while(n!=0)
        {
            n=n-1;
            s+=n*i;
            i++;
        }
        t=s+x;
        printf("%d\n",t);
    }
    return 0;
}
