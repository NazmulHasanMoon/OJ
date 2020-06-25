#include<stdio.h>
int main()
{
    long long int i,j,k,n,m,s,l,x,y;
    while(scanf("%I64d %I64d",&n,&k)!=EOF)
    {
        s=n/2;
        if(n%2==0&&k<=s)
        {
            x=k*2-1;
            printf("%I64d\n",x);
        }
        else if(n%2!=0&&k<=s+1)
        {
            x=k*2-1;
            printf("%I64d\n",x);

        }
        else if(n%2==0&&k>s)
        {
            x=k-s;
            printf("%I64d\n",x*2);
        }
        else if(n%2!=0&&k>s+1)
        {
            x=k-s-1;
            printf("%I64d\n",x*2);
        }
    }
    return 0;
}
