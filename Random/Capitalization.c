#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 1002
char c[sz];
int main()
{
    while(scanf("%s",c)!=EOF)
    {
        if(islower(c[0]))
            c[0]=toupper(c[0]);
        printf("%s\n",c);
    }
    return 0;
}
