#include<stdio.h>
int main()
{
    int x,i,a;
    scanf("%d",&x);

    for(i=1; i<=x; i++)
    {
        scanf("%d",&a);
        if((a%400==0)||(a%100!=0&&a%4==0))
        {

            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }



    }

}
