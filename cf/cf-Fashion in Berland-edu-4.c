#include<stdio.h>
#include<string.h>
#define sz 1005
int c[sz];
int main()
{
    int i,j,k,s,n;
    while(scanf("%d",&n)!=EOF)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&c[i]);
            if(c[i]==0)
                s++;
        }
        if(i==1){
            if(s==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if((s>1)||s==0)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}
