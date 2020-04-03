#include<stdio.h>
int main()
{
    int n,k,x,i=1;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        for(i=1;i<=10000;i++)
        {
            x=k*i;
            if(x>n)
            {
                printf("%d\n",x);
                break;
            }
        }
    }
    return 0;
}
