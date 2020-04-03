#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 10004
char c[sz];
int main()
{
    int i,j,k,l,count,max,x;
    count=0;
    max=-100;
    x=0;
    k=0;
    for(i=0;;i++)
    {
        scanf("%c",&c[i]);

        if(i>=4&&c[i]=='D')
        {
            if(c[i-1]=='-'&&c[i-2]=='N'&&c[i-3]=='-'&&c[i-4]=='E')
            {

                for(j=k-max;j<k;j++)
                {
                    if(isupper(c[j]))
                        c[j]=tolower(c[j]);
                    printf("%c",c[j]);
                }
                printf("\n");
                x=1;
            }

        }
        if(x==1)
            break;
        if(isalpha(c[i])||c[i]=='-'||isdigit(c[i]))
            count++;

        else if(!isalnum(c[i]))
        {
            if(max<count)
            {
                max=count;
                k=i;
            }
            count=0;
        }

    }
    return 0;
}
