#include<stdio.h>
#define sz 150
int p[sz];
int main()
{
    int i,j,k,l,m,n,m2,x,a,s;
    while(scanf("%d",&n)!=EOF)
    {
        x=0;
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&p[i]);
            x++;
        }
        scanf("%d",&m2);
        s=m+m2;
        for(i=0,l=x;i<m2;i++,l++)
        {
            scanf("%d",&a);
            p[l]=a;
        }
        for(i=0;i<s-1;i++)
        {
            for(j=i+1;j<s;j++)
            {
                if(p[i]>p[j])
                {
                    k=p[i];
                    p[i]=p[j];
                    p[j]=k;
                }
            }
        }
        for(i=0,k=0;i<s;i++)
        {
            for(j=0;j<s;j++)
            {
                if(p[i]==p[j])
                {
                    if(i!=j)
                        break;
                    else if(i==j){
                        p[k]=p[i];
                        k++;
                        break;
                    }
                }
            }
        }
        if(p[0]==1&&p[k-1]==n&&k==n)
        {
            printf("I become the guy.\n");
        }
        else
        {
            printf("Oh, my keyboard!\n");
        }
    }
    return 0;
}
