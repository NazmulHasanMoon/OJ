#include<stdio.h>
int main()
{
    int a,b,c,n,x,y,z,m,max;
    //while(scanf("%d %d %d %d",&n,&a,&b,&c)!=EOF)
    //{
        scanf("%d %d %d %d",&n,&a,&b,&c);
        max=-1;
        for(x=0;x<=n;x++)
        {
            for(y=0;y<=n;y++)
            {
                z=n-x*a-y*b;
                if(z>=0&&z%c==0)
                {
                    m=x+y+z/c;
                    if(max<m)
                        max=m;
                }
            }
        }
        printf("%d\n",max);
    //}
    return 0;
}
