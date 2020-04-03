#include<stdio.h>
int main()
{
    unsigned int X;
    int Y,S,a,b;
    char c1[5],c2[4];
    scanf("%d",&Y);
    gets(c2);
    scanf("%u",&X);
    if(X>0&&X<16)
    {
        S=X+Y;
        a=S-X;
        b=S-Y;
        if(a==Y)
            printf("%s%d\n",c1,Y);
        if(b==X)
            printf("%sX=%u\n",c2,X);
    }
    return 0;
}
