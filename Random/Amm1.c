#include<stdio.h>
int main()
{
    unsigned int i,j,k,l,m,n,rem,x,a[1000];
    while(1)
    {
        scanf("%u",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            i=1;
            x=0;
            while(n!=0)
            {
                rem=n%2;
                a[i++]=rem;
                x=x+rem;
                n=n/2;
            }
            printf("The parity of ");
            for(j=i-1;j>0;j--)
            {
                printf("%u",a[j]);
            }
            printf(" is %u (mod 2).\n",x);
        }
    }
    return 0;
}
