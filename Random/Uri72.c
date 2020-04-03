#include<stdio.h>
int main()
{
    long int i,j,k,N,X[10000];
    while(scanf("%ld",&N)!=EOF)
    {
        j=0;k=0;
        for(i=1;i<=N;i++)
        {
            scanf("%ld",&X[i]);
            if(X[i]>=10&&X[i]<=20)
            {
                j=j+1;
            }
            if(X[i]<10||X[i]>20)
            {
                k=k+1;
            }
        }
        printf("%ld in\n%ld out\n",j,k);

    }
    return 0;
}
