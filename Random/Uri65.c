#include<stdio.h>
int main()
{
    int i,j,k,l=0,m,a[6],x[6];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            l=l+1;
        }
    }
    printf("%d valores pares\n",l);
    return 0;
}
