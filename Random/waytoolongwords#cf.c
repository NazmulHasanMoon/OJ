#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,x;
    char c[102],ch[50];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%s",c);
            x=strlen(c)-1;
            if(x<10)
                printf("%s\n",c);

            else{
                printf("%c%d%c\n",c[0],x-1,c[x]);
            }
        }

    }
    return 0;
}
