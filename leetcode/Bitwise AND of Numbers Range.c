#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,pos=0;
    int ans=0;
    scanf("%d %d",&a,&b);
    int x,y,z;
    int m,n;
    m=a,n=b;
    x=y=z=0;
    //int x,y,z,a,b;
    //x=y=z=0;
    //a=m,b=n;
    if(m==n)
        return m;
    while(m)
    {
        m=m>>1;
        x++;
    }
    while(n)
    {
        n=n>>1;
        y++;
    }
    if(x&&x==y){
        y--;
        z=1<<y;
        y--;
        while(y>=0)
        {
            if((a&(1<<y))!=(b&(1<<y)))
               break;
            if(a&(1<<y)&&b&(1<<y))
                z+=(1<<y);//printf("%d\n",y);
            y--;
        }
    }
    return 0;
}
