#include<stdio.h>
int main()
{
    long int i,j,k,N;
    while(scanf("%ld",&N)!=EOF)
    {
        for(i=2;i<=N;i=i+2)
        {
            j=i*i;
            printf("%ld^2 = %ld\n",i,j);
        }
    }
    return 0;
}
