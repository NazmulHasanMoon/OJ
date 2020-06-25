#include<stdio.h>
int main()
{
    int i,j,k,x,y,z,s;
    scanf("%d %d %d",&x,&y,&z);
    if(y<=x&&y>=z)
        s=x-y+y-z;
    else if(y<=z&&y>=x)
        s=y-x+z-y;
    else if(x<=y&&x>=z)
        s=y-x+x-z;
    else if(x<=z&&x>=y)
        s=x-y+z-x;
    else if(z<=x&&z>=y)
        s=x-z+z-y;
    else if(z<=y&&z>=x)
        s=z-x+y-z;
    printf("%d\n",s);
    return 0;
}
