#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,l,t,n;
    char c[1000];
    while(gets(c))
    {
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(islower(c[i]))
            {
                putchar(c[i]);
            }
            if(isupper(c[i]))
            {
                putchar(tolower(c[i]));
            }
            if(isspace(c[i]))
            {
                putchar(c[i]);
            }
            if(isdigit(c[i]))
            {
                putchar(c[i]);
            }
            if(ispunct(c[i]))
            {
                putchar(c[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}
