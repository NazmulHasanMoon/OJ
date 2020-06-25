#include<stdio.h>
#include<string.h>
#define sz 200004
char c[sz];
int main()
{
    long long i,n,min,x;
    int y,z,s;
    while(scanf("%I64d",&n)!=EOF)
    {
        min=600000000;
        getchar();
        scanf("%s",c);
        for(i=0;i<n;i++)
        {
            scanf("%I64d",&x);
            if(c[i]=='R')
                y=x;
            if(c[i-1]=='R'&&c[i]=='L')
            {
                s=(x-y)/2;
                if(min>s)
                    min=s;
            }
        }
        if(min<600000000)
            printf("%I64d\n",min);
        else
            printf("-1\n");
    }
    return 0;
}

