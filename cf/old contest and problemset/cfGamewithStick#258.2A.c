#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        k=0;
        while(n!=0&&m!=0)
        {
            n=n-1;
            m=m-1;
            k++;
        }
        if(k%2==0)
        {
            printf("Malvika\n");
        }
        else
            printf( "Akshat\n");
    }
    return 0;
}
