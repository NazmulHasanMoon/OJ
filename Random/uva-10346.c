#include<stdio.h>
int main()
{
    int i,j,k,n,s;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        s=n;
        while(n>=k)
        {
            n=n-k+1;
            s++;
        }
        printf("%d\n",s);
    }
    return 0;
}
