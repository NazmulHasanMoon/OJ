#include<stdio.h>
int main()
{
    int i,n,k,l,c,d,p,nl,np;
    long int x,y,z;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    x=(k*l)/nl;
    y=(c*d);
    z=(p/np);
    if(x>y)
        x=y;
    if(x>z)
        x=z;
    printf("%ld\n",x/n);
    return 0;
}
