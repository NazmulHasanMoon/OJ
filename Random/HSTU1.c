#include<stdio.h>
int main()
{
    long int a,b,n;
    while(scanf("%ld %ld",&a,&b)!=EOF)
    {
        if(a>b)
            n=a-b;
        else
            n=b-a;
        printf("%ld\n",n);
    }
    return 0;
}
