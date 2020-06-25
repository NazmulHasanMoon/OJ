#include<stdio.h>
#define sz 101
int n[sz],p[sz],o[sz];
int main()
{
    int i,j,k,l,m,s,t,x,y,z;
    while(scanf("%d",&t)!=EOF)
    {
        j=k=l=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&x);
            if(x<0)
            {
                n[j]=x;
                j++;
            }
            else if(x>0)
            {
                p[k]=x;
                k++;
            }
            else
            {
                o[l]=x;
               // printf("%d\t",o[l]);
                l++;
            }
        }
        //printf("\n%d %d %d\n",j,k,l);
        if(k==0)
        {
            p[0]=n[1];
            p[1]=n[2];
            k=2;
            s=l;
            printf("1 %d\n2 %d %d\n%d ",n[0],n[1],n[2],t-3);
            for(i=3;i<j;i++)
            {
                o[s]=n[i];
                s++;
            }
            l=s;
        }
        else if(k>=1&&j>=1)
        {
            y=l;
            printf("1 %d\n1 %d\n",n[0],p[0]);
            for(i=1;i<j;i++)
            {
                o[y]=n[i];
                y++;
            }
            for(i=1;i<k;i++)
            {
                o[y]=p[i];
                y++;
            }
            l=y;
            printf("%d ",l);
        }
        for(i=0;i<l-1;i++)
            printf("%d ",o[i]);
        printf("%d\n",o[l-1]);
    }
    return 0;
}
