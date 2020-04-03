#include<stdio.h>
#include<string.h>
#define sz 100
char c[sz],ch[sz];
int main()
{
    int i,j,k,l,s;
    scanf("%s",c);
    getchar();
    scanf("%s",ch);
    for(i=0,j=0;i<strlen(ch);i++)
    {
        if(c[j]==ch[i]){
            j++;
            if(j==strlen(c)-1)
                break;
        }
    }
    printf("%d\n",j+1);
    return 0;
}
