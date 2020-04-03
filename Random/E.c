#include<stdio.h>
#include<string.h>
int main()
{
    char c[10];
    while(gets(c)!='\0')
    {
        printf("%s\n",c);
    }
    return 0;
}

