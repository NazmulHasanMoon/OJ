#include<stdio.h>
int main()
{
    long long k,l,i,j,x,y,n;
    while(scanf("%I64d %I64d",&k,&l)!=EOF)
    {
        i=0;
        while(l%k==0&&l!=1)
        {
            i++;
            l=l/k;
        }
        if(l==1)
            printf("YES\n%I64d\n",i-1);
        else
            printf("NO\n");
    }
    return 0;
}
