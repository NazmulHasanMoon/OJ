#include<stdio.h>
#define sz 102
int x[sz],y[sz];
int main()
{
    int i,j,k,l,m,n,s1,s2,s3,s4;
    while(scanf("%d",&n)!=EOF)
    {
        s1=s2=l=s3=s4=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&x[i],&y[i]);
            s1+=x[i];
            s2+=y[i];
            if((x[i]%2!=0&&y[i]%2==0)||(x[i]%2==0&&y[i]%2!=0))
            {
                s3+=y[i];s4+=x[i];
            }

        }
        if(s1%2==0&&s2%2==0)
            printf("0\n");
        else if((s3%2!=0&&s4%2==0)||(s3%2==0&&s4%2!=0))
            printf("-1\n");
        else
        {
            for(i=0;i<n;i++)
            {
                if((x[i]%2!=0&&y[i]%2==0)||(x[i]%2==0&&y[i]%2!=0)){
                    l=1;
                    break;
                }
            }
            if(l==1)
                printf("1\n");
            else
                printf("-1\n");

        }

    }
    return 0;
}
