#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define sz 30
char c[sz],ch[sz];
int main()
{
    int i,j,k,l;
    while(scanf("%s",c)!=EOF)
    {
        for(i=0,k=0;i<strlen(c);i++)
        {
            if(c[i]!='B'&&c[i]!='C'&&c[i]!='D'&&c[i]!='F'&&c[i]!='G'&&c[i]!='0'&&c[i]!='K'&&c[i]!='P'&&c[i]!='Q'&&c[i]!='R'&&c[i]!='4'&&c[i]!='6'&&c[i]!='7'&c[i]!='9')
                k++;
        }
        strcpy(ch,c);
        if(k==strlen(c))
        {
            strrev(ch);
            l=strcmp(c,ch);
            if(l==0)
                printf("%s -- is a mirrored palindrome.\n\n",c);
            else
                printf("%s -- is a mirrored string.\n\n",c);
        }
        else
        {
            strrev(ch);
            if(strcmp(c,ch)==0)
                printf("%s -- is a regular palindrome.\n\n",c);
            else
                printf("%s -- is not a palindrome.\n\n",c);
        }
    }
    return 0;
}
