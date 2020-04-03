#include<stdio.h>
int main()
{
    int t,i;
    long a;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%ld",&a);
            if(a<100000){
            if(a%3==0&&a%5==0)
                printf("Case %d: FizzBuzz\n",i);
            else if(a%3==0)
                printf("Case %d: Fizz\n",i);
            else if(a%5==0)
                printf("Case %d: Buzz\n",i);
            else
                printf("Case %d: Null\n",i);
            }
            //else
              //  printf("Case %d: Null\n",i);
        }
    }
    return 0;
}
