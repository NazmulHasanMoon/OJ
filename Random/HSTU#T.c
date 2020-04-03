#include<stdio.h>
int main()
{
    unsigned long int N,rem;
    int sum;
    while(scanf("%lu",&N)!=EOF)
    {
        if(N==0)
            break;
        start:
        sum=0;
        while(N!=0)
        {
            rem=N%10;
            sum=sum+rem;
            N/=10;
            if(sum<10)
            {
                printf("%d\n",sum);
            }
            else
            {
                goto start;
            }
        }
    }

    return 0;
}
