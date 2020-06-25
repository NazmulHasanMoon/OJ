#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,x[5],y[5],s=0;
    for(i=0;i<5;i++){
        scanf("%d",&x[i]);
        s+=x[i];
    }
    m=s;
    for(i=0;i<4;i++)
    {
        k=0;
        for(j=i+1;j<5;j++)
        {
            if(x[i]==x[j])
                k++;
        }
        //printf("%d %d\n",k,x[i]);
        if(k==1)
            n=s-2*x[i];
        if(m>n)
            m=n;
    }
    for(i=0;i<4;i++)
    {
        k=0;
        for(j=i+1;j<5;j++)
        {
            if(x[i]==x[j])
                k++;
        }
        //printf("%d %d\n",k,x[i]);
        if(k>=2)
            n=s-3*x[i];
        if(m>n)
            m=n;
    }
    printf("%d\n",m);
    return 0;
}
