#include<stdio.h>
int main()
{
    long int year,x,y,z,i,a,b,j,l;
    while(scanf("%ld",&year)!=EOF)
    {
        a=0;
        x=0;
        if((year%4==0&&year%100!=0)||(year%400==0))
        {
            x=year+4;
            if((x%4==0&&x%100!=0)||(x%400==0))
            {
                y=year;
                z=0;
                for(j=1,z=0;j<=7;j++){
                    y+=4;
                    if((y%4==0&&y%100!=0)||(y%400==0))
                        z++;
                }
                if(z==7)
                    printf("%ld\n",y);
                else
                    printf("%ld\n",y+12);
            }
            else
            {
                printf("%ld\n",year+12);
            }

        }
        else
        {
            a=year+1;
            x=year+2;
            z=year+3;
            if((a%4==0&&a%100!=0)||(a%400==0))
            {
                year=a+10;
                printf("%ld\n",year);
            }
            else if((x%4==0&&x%100==0&&x%400!=0)||(z%4==0&&z%100==0&&z%400!=0))
            {
                printf("%ld\n",year+12);
            }
            else if((x%4==0&&x%100!=0)||(x%400==0))
            {
                l=0;
                for(j=1;j<=11;j++)
                {
                    year++;
                    if((year%4==0&&year%100!=0)||(year%400==0))
                        l++;
                }
                if(l==3)
                    printf("%ld\n",year);
                else
                    printf("%ld\n",year-5);
            }
            else
                printf("%ld\n",year+6);
        }
    }
    return 0;
}
