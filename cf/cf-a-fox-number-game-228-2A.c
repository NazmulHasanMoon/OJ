#include<stdio.h>
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
    int a,b,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(i==0)
            b=a;
        if(i>0)
        {
            b=gcd(a,b);
        }
    }
    printf("%d\n",n*b);
    return 0;
}

