#include<stdio.h>
int main()
{
    long int a,b,c,s;
    scanf("%ld %ld %ld",&a,&b,&c);
    s=a+c;
    if(c==(b-s))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
