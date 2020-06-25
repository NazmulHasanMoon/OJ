#include<stdio.h>
#include<string.h>
#define sz 200004
char c[sz];
int main()
{
    long int i,n,min;
    int y,z,s,x;
    while(scanf("%ld",&n)!=EOF)
    {
        min=32000000;
        getchar();
        scanf("%s",c);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(c[i]=='R')
                y=x;
            if(c[i-1]=='R'&&c[i]=='L')
            {
                s=(x-y)/2;
                if(min>s)
                    min=s;
            }
        }
        if(min<32000000)
            printf("%ld\n",min);
        else
            printf("-1\n");
    }
    return 0;
}
