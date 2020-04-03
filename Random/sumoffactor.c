#include<stdio.h>
#define sz 30
int a[sz];
int main()
{
    int n,s,i,x,j=1,k,max,temp,l;
    while(scanf("%d",&n)==1&&n!=0)
    {
        max=0;

        for(x=1,k=1;x<=n;x++)
        {
            s=0;
            for(i=1;i<=x;i++)
            {
                if(x%i==0){
                    s+=i;
                }
            }
            if(s==n){
                a[k]=x;
                k++;
            }
        }
        for(l=1;l<k;l++)
        {
            if(a[l]!=0){
                if(max<a[l])
                    max=a[l];
            }
            else
                max=0;
        }
        if(max==0)
        {
            printf("Case %d: -1\n",j);
        }
        else
        {
            printf("Case %d: %d\n",j,max);
        }
        j++;

    }
    return 0;
}
