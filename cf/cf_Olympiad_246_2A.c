#include<stdio.h>
int main()
{
    int i,s,n,k,t;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&t);
            if(t+k<=5)
            {
                s++;
            }
        }
        printf("%d\n",s/3);
    }
    return 0;
}
