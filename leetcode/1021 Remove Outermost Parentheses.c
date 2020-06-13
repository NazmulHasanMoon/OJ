#include<stdio.h>

char * removeOuterParentheses(char * S){
    static char res[1000000];
    int i,j,k;
    i=j=k=0;
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]=='(')
        {
            j++;
            if(j>1)
                res[k++]=S[i];
        }
        else
        {
            j--;
            if(j)
                res[k++]=S[i];
        }
    }
    res[k]='\0';
    return res;
}
int main()
{
    char s[1000000];
    scanf("%s",s);
    printf("%s\n",removeOuterParentheses(s));
}
