#include<stdio.h>
#include<string.h>
#define sz 120000
char c[sz];
int main()
{
    long long int i,j,k,l,s=0;
    while(gets(c))
    {
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]=='"')
            {
                s++;
                if(s%2!=0)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
