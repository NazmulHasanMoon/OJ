#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int n)
{
    if(n==0)
        return a;
    if(n>a)
        return gcd(n,a);
    else
        return gcd(n,a%n);
}
int main()
{
    int a,b,n,x;
    cin>>a>>b>>n;
    // bool t(0);
    while(n)
    {
        x=gcd(a,n);
        //cout<<x<<' ';

        if(x>n)
        {
            printf("1\n");
            return 0;
        }
        n-=x;
        x=gcd(b,n);
        //cout<<x<<' ';
        if(x>n)
        {
            printf("0\n");
            return 0;
        }
        n-=x;

    }
    printf("1\n");
    return 0;
}
