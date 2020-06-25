#include<stdio.h>
int main()
{
    long long s,i,j,k,n,f,t,max;
    while(scanf("%I64d %I64d",&n,&k)!=EOF)
    {
        max=-32000000000;
        for(i=0;i<n;i++)
        {
            scanf("%I64d %I64d",&f,&t);
            if(t>k)
                s=f-(t-k);
            else
                s=f;
            if(max<s)
            {
                max=s;
            }
        }
        printf("%I64d\n",max);
    }
    return 0;
}
