#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b>a)
        return gcd(b,a);

    if(b==0)
        return a;

    else
        return gcd(b,a%b);
}
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    gcd(a,b);
    ///printf("\nGCD of %d and %d is %d\n",a,b,gcd(a,b));
    ///printf("\nLCM of %d and %d is %d\n",a,b,a*b/gcd(a,b));
    return 0;
}

