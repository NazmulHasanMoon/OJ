#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 102
char c[sz];
int main()
{
    int i,j,k,l;
    while(scanf("%s",c)!=EOF)
    {
        k=0;l=0;
        for(i=0;i<strlen(c);i++)
        {
            if(isupper(c[i]))
                k++;
            else
                l++;
        }
        if(l>=k)
        {
            for(i=0;i<strlen(c);i++)
            {
                if(isupper(c[i]))
                    c[i]=tolower(c[i]);
                printf("%c",c[i]);
            }
            printf("\n");
        }
        else
        {
            for(i=0;i<strlen(c);i++)
            {
                if(islower(c[i]))
                    c[i]=toupper(c[i]);
                printf("%c",c[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
