#include<stdio.h>
int main()
{
    long int n,i;
    while(scanf("%ld",&n)!=EOF)
    {
        long int a[n],b[n];
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        for(i=0;i<n-1;i++){
            printf("%ld ",a[i]+a[i+1]);
        }
        printf("%ld\n",a[i]);
    }
    return 0;
}
