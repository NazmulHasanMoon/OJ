#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m;
    char c[1000],c1[10]="hello";
    while(scanf("%s",c)!=EOF)
    {
        l=0;
        for(i=0,j=0;c[i]!='\0';i++)
        {
            if(c[i]==c1[j])
            {
                l=l+1;
                j++;
            }
        }
        if(l==5)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
