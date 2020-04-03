#include<stdio.h>
int main()
{
    unsigned int A,B,N,i,s,a;
    while(scanf("%u",&N)!=EOF)
    {
        s=0;
        for(i=1;i<=N;i++)
        {
            scanf("%u %u",&A,&B);
            a=B-A;
            s=s+a;
        }
        printf("%u\n",s);
    }
    return 0;
}
