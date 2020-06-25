#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,k;
    char c[102],ch[102];
    while(scanf("%s %s",c,ch)!=EOF){
    for(i=0;i<strlen(c);i++)
    {
        if(isupper(c[i])){
           c[i]=tolower(c[i]);
        }
    }
    for(i=0;i<strlen(ch);i++)
    {
        if(isupper(ch[i]))
        {
            ch[i]=tolower(ch[i]);
        }
    }
    k=strcmp(c,ch);
    printf("%d\n",k);
    }
    return 0;
}
