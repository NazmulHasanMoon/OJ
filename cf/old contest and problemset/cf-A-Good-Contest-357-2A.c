#include<stdio.h>
#include<string.h>
#define sz 50
char c[sz];
int main()
{
    int i,k,b,a,n,s;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        k=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",c);
            getchar();
            scanf("%d %d",&b,&a);
            s=a-b;
            if(b>=2400&&s>0)
                k=1;
        }
        if(k==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
