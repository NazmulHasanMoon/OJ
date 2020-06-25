#include<string.h>
#include<stdio.h>
#define sz 1000
char c[sz];
int main()
{
    int i,j,k,l,s,n,p,q;
    while(scanf("%d %d %d",&n,&p,&q)!=EOF)
    {
        getchar();
        scanf("%s",c);
        if(p<=n/2&&p<q)
        {
            s=p;
            i=1;
            while(s<n)
            {
                s=s+p;
                if(s<=n)
                    i++;
            }
            for(j=0;j<p;j++)
            {
                printf("%c",c[j]);
            }
            for
        }

    }
    return 0;
}
