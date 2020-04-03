#include<stdio.h>
#define sz 1000
int x[sz],y[sz];
int main()
{
    int i,j,k,l,n,z,s,s1,s2,s3,s4,c;
    //while(scanf("%d",&n)!=EOF)
    //{
        scanf("%d",&n);
        c=0;
        for(i=0;i<n;i++)
            scanf("%d %d",&x[i],&y[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(x[i]>x[j]&&y[i]==y[j])
                    s1=1;
                if(x[i]<x[j]&&y[i]==y[j])
                    s2=1;
                if(x[i]==x[j]&&y[i]>y[j])
                    s3=1;
                if(x[i]==x[j]&&y[i]<y[j])
                    s4=1;
               // s=s1+s2+s3+s4;
            }
            if(s1==1&&s2==1&&s3==1&&s4==1)
                c++;
            //printf("%d\n",s);
            s1=0;s2=0;s3=0;s4=0;
        }
        printf("%d\n",c);
    //}
    return 0;
}
