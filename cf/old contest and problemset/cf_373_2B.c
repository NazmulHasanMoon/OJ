#include<stdio.h>
#define sz 100004
char c[sz];
int main()
{
    long int n,i,j,k,m;
    while(scanf("%ld",&n)!=EOF)
    {
        getchar();
        j=k=0;
        for(i=0;i<n;i++){
            scanf("%c",&c[i]);
            if(c[i]=='b')
            {
                j++;
            }
            else
            {
                k++;
            }
            //printf("%ld %ld\t",j,k);
        }
        if(j==n||k==n)
            printf("%ld\n",n/2);
        else if(j>k&&j<n)
        {
            j=k;
            printf("%ld\n",j);
        }
    }
    return 0;
}
