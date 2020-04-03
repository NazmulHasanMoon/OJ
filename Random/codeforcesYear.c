#include<stdio.h>
int main()
{
    int year,x,y,z,i,a,b;
    while(scanf("%d",&year)!=EOF)
    {
        if((year%4==0&&year%400==0&&year%100==0)||(year%100!=0&&year%400!=0&&year%4==0))
        {
            x=year+28;
            if((x%4==0&&x%400==0&&x%100==0)||(x%100!=0&&x%400!=0&&x%4==0))
            {
                printf("%d\n",x);
            }
            else
            {
                printf("%d\n",x+12);
            }

        }
        else
        {
            a=year+1;
            if((a%4==0&&a%400==0&&a%100==0)||(a%400!=0&&a%100!=0&&a%4==0))
            {
                x=a+10;
                printf("%d\n",x);
            }
            else if((year%4==0&&year%400!=0&&year%100==0)||(year%4!=0))
            {
                x=year+6;
                printf("%d\n",x);
            }
            else
            {
                x=year+6;
                printf("%d\n",x);
            }
        }
    }
    return 0;
}
