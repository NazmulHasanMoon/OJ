#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,s,x,rem;
    while(scanf("%d",&n)!=EOF)
    {
        k=0;
        if(n%6==0||(n+2)%6==0)
            k=1;
        if(n%3==2)
        {
            s=(n+1);
        }
        else
            s=n;
        while(s>=3)
        {
            j=s/3;
            rem=s%3;
            k+=j;
            s=j+rem;
        }
        printf("%d\n",k+n);
    }
    return 0;
}
