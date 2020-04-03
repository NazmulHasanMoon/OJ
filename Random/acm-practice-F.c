#include<stdio.h>
#define sz 1000
long int a[sz];
int main()
{
    long int i,j,k,y,l,m,x,n,min,t,s;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        min=32000000;
        s=0;
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
            s+=a[j];
            if(min>a[j])
                min=a[j];
        }
        for(j=min,y=2;y<=min;j=y)
        {
            l=0;
            for(k=0;k<n;k++)
            {
                if(a[k]%j==0)
                    l++;
            }
            if(l==n){
                x=j;
                break;
            }
             while(min%y!=0)
                y++;
        }
        printf("%ld %ld\n",x,s/x);
    }
    return 0;
}
