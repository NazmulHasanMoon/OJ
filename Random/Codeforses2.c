#include<stdio.h>
int main()
{
    int n,t,x;
    scanf("%d %d",&n,&t);
    if(1<=n&&n<=10&&0<=t&&t<=10000)
    {
        x=(n+t)/2;
        printf("%d\n",x);
    }
    return 0;
}
