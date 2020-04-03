#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int i,A;
    char ch[7];
    i=0;
    while(i<127)
    {
        scanf("%s",ch);//gets(ch);
        putchar('\n');
        if(strlen(ch)==4)
        {
            printf("Case %d: Hajj-e-Akbar\n",i+1);
        }
        else if(strlen(ch)==5)
        {
            printf("Case %d: Hajj-e-Asghar\n",i+1);
        }
        else if(strlen(ch)==1)
        {
            break;
        }
        i++;
    }
    return 0;
}
