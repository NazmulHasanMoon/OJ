#include<stdio.h>
int stack[20001],top;
char * removeDuplicates(char * S){
    int i=0,x;
    top=0;
    static char res[20001];
    for(i=0;S[i]!='\0';i++)
    {
        x=S[i]-'a';
        if(top==0||stack[top-1]!=x)
            stack[top++]=x;
        else
            top--;
    }
    for(i=0;i<top;i++)
        res[i]=stack[i]+'a';
    res[top]='\0';
    return res;
}
int main()
{
    char S[20001];
    scanf("%s",S);
    printf("%s",removeDuplicates(S));
    return 0;
}
