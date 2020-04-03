#include<stdio.h>
#include<string.h>
#include<ctype.h>
void delvow(char c[],int x,int i)
{
    if(i<=x)
    {
        if(c[i]!='A'&&c[i]!='a'&&c[i]!='e'&&c[i]!='E'&&c[i]!='I'&&c[i]!='i'&&c[i]!='o'&&c[i]!='O'&&c[i]!='u'&&c[i]!='U'&&c[i]!='y'&&c[i]!='Y')
        {
            putchar('.');
            if(isupper(c[i]))
                putchar(tolower(c[i]));
            else
                putchar(c[i]);
        }
        i++;
        delvow(c,x,i);
    }
}
int main()
{
    int i=0,j,k,x,l;
    char c[102];
    while(scanf("%s",c)!=EOF)
    {
        x=strlen(c)-1;
        delvow(c,x,i);
        printf("\n");
    }
    return 0;
}
