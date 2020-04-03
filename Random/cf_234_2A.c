#include<stdio.h>
#define sz 101
int x[sz],y[sz];
int main()
{
    int i,j,k,l,n,z,s,c;
    //while(scanf("%d",&n)!=EOF)
    //{
        scanf("%d",&n);
        c=0;
        for(i=0;i<n;i++)
            scanf("%d %d",&x[i],&y[i]);
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=0;j<n;j++)
            {
                if(x[i]>x[j]&&y[i]==y[j])
                    s++;
                if(x[i]<x[j]&&y[i]==y[j])
                    s++;
                if(x[i]==x[j]&&y[i]>y[j])
                    s++;
                if(x[i]==x[j]&&y[i]<y[j])
                    s++;
            }
            if(s>=4)
                c++;
        }
        printf("%d\n",c);
    //}
    return 0;
}

