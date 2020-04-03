#include<stdio.h>
int main()
{
    unsigned long int i,j,w,r,g,b,S,T;
    scanf("%lu",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lu %lu %lu %lu",&w,&r,&g,&b);
        if((w>0&&r>0)||(r>0&&g>0)||(g>0&&b>0)||(g>0&&w>0)||(g>0&&r>0)||(r>0&&b>0)||(w>0&&b>0))
        {
            j=w+r+g+b;
            S=j/4;
            printf("Case %lu: %lu\n",i,S);
        }
        else
        {
            S=0;
            printf("Case %lu: %lu\n",i,S);
        }

    }
    return 0;
}
