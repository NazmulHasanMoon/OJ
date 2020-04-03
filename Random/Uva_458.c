#include<stdio.h>
#include<string.h>
#define sz 10000
char c[sz];
int main()
{
    long long i,j;
    while(gets(c))
    {
        for(i=0;i<strlen(c);i++)
        {
            printf("%c",c[i]-7);
        }
        printf("\n");
    }
    return 0;
}
