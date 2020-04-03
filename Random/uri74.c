#include<stdio.h>
int main()
{
    long int i,j,k,N,X[10000];
    while(scanf("%ld",&N)!=EOF)
    {
        for(i=0;i<N;i++)
        {
            scanf("%ld",&X[i]);
            if(X[i]%2==0&&X[i]>0)
                printf("EVEN POSITIVE\n");

            else if(X[i]%2!=0&&X[i]>0)
                printf("ODD POSITIVE\n");

            else if(X[i]%2==0&&X[i]<0)
                printf("EVEN NEGATIVE\n");

            else if(X[i]%2!=0&&X[i]<0)
                printf("ODD NEGATIVE\n");

            else if(X[i]==0)
                printf("NULL\n");
        }
    }
    return 0;
}
