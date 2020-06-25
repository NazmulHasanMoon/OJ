#include<stdio.h>
#define sz 200
int p[sz],t[sz];
int main()
{
    int i,j,k,l,n,tp,tt,count,sp,st,tp2,tt2;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&p[i],&t[i]);
        }
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(p[i]<p[j])
                {
                    tp=p[i];
                    p[i]=p[j];
                    p[j]=tp;

                    tt=t[i];
                    t[i]=t[j];
                    t[j]=tt;
                }
                else if(p[i]==p[j])
                {
                    if(t[i]>t[j])
                    {
                        tt2=t[i];
                        t[i]=t[j];
                        t[j]=tt2;
                        tp2=p[i];
                        p[i]=p[j];
                        p[j]=tp2;
                    }
                }
            }
        }
        sp=p[k];
        st=t[k];
        for(i=1;i<=n;i++)
        {
            if(sp==p[i]&&st==t[i]){

                count++;
            }
        }

        printf("%d\n",count);
    }
    return 0;
}
