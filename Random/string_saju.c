#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define sz 1000
char c[sz];
int main()
{
    int i,j,k,l;
    while(gets(c))
    {
        for(i=0;i<strlen(c);i++)
        {
            if(i==0&&isalpha(c[i]))
            {
                if(islower(c[i]))
                    c[i]=toupper(c[i]);
            }
            if(isalpha(c[i])&&!isalpha(c[i-1]))
            {
                if(islower(c[i]))
                    c[i]=toupper(c[i]);
            }
        }
        puts(c);
    }
    return 0;
}

