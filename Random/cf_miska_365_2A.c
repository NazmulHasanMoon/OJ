#include<stdio.h>
int main()
{
    int n,m,c,s,i;
    /*while(scanf("%d",&n)!=EOF)
    {*/
        scanf("%d",&n);
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&m,&c);
            if(m>c)
                s++;
            else if(m<c)
                s--;
        }
        if(s>0)
            printf("Mishka\n");
        else if(s<0)
            printf("Chris\n");
        else
            printf("Friendship is magic!^^\n");
    return 0;
}
