#include<stdio.h>
#include<string.h>
#define sz 150
char c[sz][sz];
int main()
{
    int i,j,k,l,m,n;
    //while(scanf("%d %d",&n,&m)!=EOF)
    //{
        scanf("%d %d",&n,&m);
        getchar();
        for(i=0;i<n;i++)
        {
            scanf("%s",c[i]);
            getchar();
        }
        k=0;l=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(c[i][j]=='-'){
                    c[i][j]='-';
                }
                else{
                    if(k%2==0)
                        c[i][j]='B';
                    else
                        c[i][j]='W';
                }
                k++;
            }
            if(l==1)
            {
                k=l;
                l=0;
            }
            else
            {
                k=l;
                l=1;
            }
        }
        for(i=0;i<n;i++)
            puts(c[i]);
    //}
    return 0;
}
