#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char c[4000],k;
    while(scanf("%s",c)!=EOF)
    {
        l=strlen(c)-1;
        for(i=0;i<l;i=i+2)
        {
            for(j=i+2;j<=l;j=j+2)
            {
                if(c[i]>c[j])
                {
                    k=c[i];
                    c[i]=c[j];
                    c[j]=k;
                }
            }
        }
        puts(c);
    }
    return 0;
}
