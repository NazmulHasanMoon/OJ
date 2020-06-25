#include<stdio.h>
#include<string.h>
#define sz 10000
char c[sz];
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%s",c)!=EOF)
    {
        n=0;
        for(i=0;i<strlen(c);i++)
        {
            if(c[i]=='4'||c[i]=='7')
            {
                n++;
            }
        }
        if(n==4||n==7)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

