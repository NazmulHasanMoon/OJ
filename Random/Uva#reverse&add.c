#include<stdio.h>
void reverse(long long int n,long long n1,long long int i)
{
    long long int rev=0,rem;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev!=n1)
    {
        n=rev+n1;
        n1=n;
        i=i+1;
        reverse(n,n1,i);
    }
    else
        printf("%lld %lld\n",i,rev);
}
int main()
{
    long long int i=0,j=0,t,n,n1;
    scanf("%lld",&t);
    for(j=0;j<t;j++)
    {
        scanf("%lld",&n);
        n1=n;
        reverse (n,n1,i);

    }
    return 0;
}
