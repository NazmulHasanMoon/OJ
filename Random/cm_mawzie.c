
#include<stdio.h>
int main()
{
    long long int n,k,poor,owner,total,relative;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
{
        scanf("%lld %lld",&k,&n);
        if(k==0 || k==1)
        {
        if(k==0)
        {
         poor=n/3;
         relative=2*(((2*n)/(3*3)));
         owner=((2*n)/(3*3));
         printf("Case %d:\n%lld\n%lld\n%lld\n",i,poor,relative,owner);
        }
        else{
            poor=(3*n)/2;
            relative=2*n;
            total=(9*n)/2;
            printf("Case %d:\n%lld\n%lld\n%lld\n",i,poor,relative,total);
        }
   }
   }
    return 0;
}
