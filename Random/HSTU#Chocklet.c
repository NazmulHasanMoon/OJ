#include<stdio.h>
int main()
{
    unsigned int M,N,A;
    while(scanf("%u %u",&M,&N)!=EOF&&1<=M&&M<=300&&1<=N&&N<=300)
    {
        A=(M*N)-1;
        printf("%u\n",A);
    }
    return 0;
}
