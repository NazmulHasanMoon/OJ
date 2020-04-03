#include<stdio.h>
int main()
{
    int i;
    long int a,b,c,s;
    while(scanf("%ld %ld %ld",&a,&b,&c)!=EOF)
    {
        if(c==0)
        {
            if(a==b)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if((b-a)/c>=0&&(b-a)%c==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
