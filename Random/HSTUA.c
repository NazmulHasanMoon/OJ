#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],c[100];
    int x;
    scanf("%s %s",ch,c);
    x=strcmp(ch,c);
    if(x!=0)
        printf("no\n");
    else
        printf("yes\n");

    return 0;
}
