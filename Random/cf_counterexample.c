#include<stdio.h>
int main()
{
    long long a,b,c,l,r;
    while(scanf("%I64d %I64d",&l,&r)!=EOF)
    {
        if(l%2!=0)
            l++;
        if(l+2>r)
            printf("-1\n");
        else
            printf("%I64d %I64d %I64d\n",l,l+1,l+2);
    }
    return 0;
}
