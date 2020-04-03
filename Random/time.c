#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x,y,n,i;
    char c1,c2,c3,c4;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%c%d %d%c%d",&x1,&c1,&y1,&x2,&c2,&y2);
        if(x2>=x1&&y2>=y1)
        {
            x=x2-x1;
            y=y2-y1;
            printf("Case %d: %d hours %d minutes\n",i,x,y);
        }
        else if((x2>x1&&y2<y1))
        {
            x=x2-x1-1;
            y=y2+60-y1;
            printf("Case %d: %d hours %d minutes\n",i,x,y);
        }
        else if(x2<=x1&&y2<y1)
        {
            x=x2+23-x1;
            y=y2+60-y1;
            printf("Case %d: %d hours %d minutes\n",i,x,y);
        }
        else if(x2<x1&&y2>=y1)
        {
            x=x2+24-x1;
            y=y2-y1;
            printf("Case %d: %d hours %d minutes\n",i,x,y);
        }
    }
    return 0;
}
