#include<stdio.h>
int main()
{
    unsigned long int N,i;
    while(scanf("%lu",&N)!=EOF&&0<=N&&N<=210000000)
    {
        unsigned long long int C=1;
        for(i=0;i<=N;i++)
        {
            C=C+i;
        }
        printf("%llu\n",C);
    }
    return 0;
}
