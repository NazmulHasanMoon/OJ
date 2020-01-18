#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 104
char c[sz];
int main()
{
    int i,j,k,l;
    while(scanf("%s",c)!=EOF)
    {
        l=1;
        k=0;
        for(i=1;i<strlen(c);i++)
        {
            if(isupper(c[i]))
                l++;
        }
        if(k==1&&l==1)
        {
            c[0]=tolower(c[0]);
            printf("%s\n",c);
        }
        else if(l!=strlen(c))
            printf("%s\n",c);
        else
        {
            for(j=0;j<strlen(c);j++)
            {
                if(j==0)
                {
                    if(isupper(c[j]))
                        c[j]=tolower(c[j]);
                    else if(islower(c[j]))
                        c[j]=toupper(c[j]);
                    printf("%c",c[j]);
                }
                else
                    printf("%c",tolower(c[j]));
            }
            printf("\n");
        }
    }
    return 0;
}
