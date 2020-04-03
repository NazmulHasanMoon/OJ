#include<stdio.h>
int main()
{
    unsigned int a,b,c;
    while(scanf("%u %u %u",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        else
        {
            if((c>a&&c>b&&(c*c==a*a+b*b))||(a>b&&a>b&&(a*a==b*b+c*c))||(b>a&&b>c&&(b*b==a*a+c*c)))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
    }

    return 0;
}
