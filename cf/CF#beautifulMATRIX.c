#include<stdio.h>
int main()
{
    int i,j,k,r,c,m[5][5],x,y,s;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&m[i][j]);
            if(m[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    if(x<2&&y>=2)
    {
        s=2-x+y-2;
        printf("%d\n",s);
    }
    else if(x>=2&&y<2)
    {
        s=x-2+2-y;
        printf("%d\n",s);
    }
    else if(x<2&&y<2)
    {
        s=2-x+2-y;
        printf("%d\n",s);
    }
    else
    {
        s=x-2+y-2;
        printf("%d\n",s);
    }
    return 0;
}
