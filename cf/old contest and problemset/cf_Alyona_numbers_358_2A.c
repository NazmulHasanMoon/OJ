#include<stdio.h>
int main()
{
    long int i,j,k,n,m;
    long long s;
    while(scanf("%ld %ld",&n,&m)!=EOF)
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            j=(m+i)/5;
            k=i/5;
            s+=j-k;
            //s+=m/5;
            /*k=1;
            j=(5-i%5)%5;
            if(j==0)
                k=0;
            s+=(m-j)/5+k;*/
        }
        printf("%I64d\n",s);
    }
    return 0;
}
