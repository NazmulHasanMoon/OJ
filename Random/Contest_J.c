#include<stdio.h>
int main()
{
    int k,n,i,j,a[100],s,B,C,A,D,l;
    while(scanf("%d %d",&k,&n)!=EOF&&1<=k&&k<=100)
    {
        m:
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=0&&a[i]<=100)
            {

                if(a[i]>=0&&a[i]<=k)
                {
                    C=0;
                }
                else if(a[i]>k)
                {
                    C=i;
                    break;
                }
            }
        }
        for(j=C;j<n;j++)
        {
            s=s+a[j];
        }
        B=n-C;
        A=k*B;
        D=s-A;
        if(D>=0)
        {
            printf("%d\n",D);
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
