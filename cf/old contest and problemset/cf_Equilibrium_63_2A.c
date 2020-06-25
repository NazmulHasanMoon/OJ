#include<stdio.h>
#define size 100
int sx[size],sy[size],sz[size];
int main()
{
    int i,j,k,l,n,x,y,z;
    while(scanf("%d",&n)!=EOF)
    {
        j=0;k=0;l=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            sx[i]=x;
            sy[i]=y;
            sz[i]=z;
        }
        for(i=0;i<n;i++)
        {
            j+=sx[i];
            k+=sy[i];
            l+=sz[i];
        }
        if(j==0&&k==0&&l==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
