#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a[6];

    j=0; k=0; l=0; m=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            j=j+1;
        }
        if(a[i]%2!=0)
        {
            k=k+1;
        }
        if(a[i]>0)
        {
            l=l+1;
        }
        if(a[i]<0)
        {
            m=m+1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",j,k,l,m);
    return 0;
}
