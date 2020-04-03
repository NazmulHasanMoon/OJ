#include<stdio.h>
int main()
{
    unsigned int N,A,i,j,rev=0,rem,n;
    while(scanf("%u",&N)!=EOF)
    {
        A=N/2;
        for(j=2;j<=A;j++)
        {
            k=N%j;
        }
        if(k!=0)
        {
            printf("Prime\n");
            while(N!=0)
            {
                rem=N%10;
                rev=rev*10+rem;
                N/=10;
            }
            for(i=2;i<=rev/2;i++)
            {
                n=i*2;
            }
            if(n==rev)
            {
                printf("Emprime\n");
            }
        }
    }
    return 0;
}
