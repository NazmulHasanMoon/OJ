#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,l,m,n,count,sum;
    char c[4000];
    while(gets(c))
    {
        l=strlen(c);
        count=0;
        for(i=0,j=1;i<l;i++,j++)
        {
            if(isalpha(c[i])&&!isalpha(c[j]))
            {
                    count=count+1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

