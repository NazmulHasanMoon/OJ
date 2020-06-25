#include<stdio.h>
int main()
{
    long long int i,j,k,l,n,s;
    while(scanf("%I64d",&n)!=EOF)
    {
        if(n%2==0)
            s=n/2;

        else
            s=-((n/2)+1);
        printf("%I64d\n",s);
    }
    return 0;
}
