#include<stdio.h>
int main()
{
    long long i,j,k,l,n;
    scanf("%I64d",&n);
    for(i=1;;i++)
    {
        k=n+i;
        l=1;
        while(k!=0)
        {
            if(k%10==8||k%10==-8)
            {
                l=0;
                break;
            }
            k=k/10;
        }
        if(l==0)
            break;
    }
    printf("%I64d\n",i);
    return 0;
}
