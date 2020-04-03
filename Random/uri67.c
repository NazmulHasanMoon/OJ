#include<stdio.h>
int main()
{
    unsigned int i,j,X;
    while(scanf("%u",&X)!=EOF)
    {
        for(i=X+1;i<=(X+12);i=i+2)
        {
            printf("%u\n",i);
        }
    }
    return 0;
}
