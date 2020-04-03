#include<stdio.h>
int main()
{
    unsigned int i,N;
    while(scanf("%u",&N)!=EOF)
    {
        for(i=1;i<=10;i++)
        {
            printf("%u x %u = %u\n",i,N,i*N);
        }
    }
    return 0;
}
