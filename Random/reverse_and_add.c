/*#include<stdio.h>
int s;
long long int X;
void reverse(long long int x,long long int y)
{
    X=4294967295;
    long long rem,rev=0;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    if(rev!=y)
    {
        x=rev+y;
        s++;
        y=x;
        reverse(x,y);
    }
    else
    {
        if(rev<=X)
            printf("%d %I64d\n",s,rev);
    }
}
int main()
{
    long long int k,m,x,y;
    int i,j,n,t;
    while(scanf("%d",&n)!=EOF)
    {

        for(i=0;i<n;i++)
        {
            scanf("%I64d",&x);
            y=x;
            reverse(x,y);
        }
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    long int count,add,n,rev,t,i,j,d,k;
    while(scanf("%ld",&t)==1)
    {
    for(i=0;i<t;i++)
        {
        scanf("%ld",&n);
        count=0;
        rev=0;
        j=n;
        while(j!=0)
        {
            d=j%10;
            rev=rev*10+d;
            j=j/10;
        }
        if(n!=rev)
            for(k=0;k<1000;k++)
            {
            add=n+rev;
            count++;
            rev=0;
            n=add;
            j=n;
            while(j!=0)
            {
                d=j%10;
                rev=rev*10+d;
                j=j/10;
            }
            if(n==rev)    break;
            }
        printf("%ld %ld\n",count,n);

        }
    }
    return 0;
}
