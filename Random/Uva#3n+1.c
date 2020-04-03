#include<stdio.h>
long long int series(long long int n)
{
    if(n==1)
        return 1;
    else if(n&1)
        return series(3*n+1)+1;
    else
        return series(n/2)+1;
}
long long int maxcycle(long long int a, long long int b)
{
    if(a>b)
        return maxcycle(b,a);

    long long int max=0,cycle;
    while(a<=b)
    {
        cycle=series(a);
        if(max<cycle)
            max=cycle;
        a++;
    }
    return max;
}
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
        printf("%lld %lld %lld\n",a,b,maxcycle(a,b));
    return 0;
}
