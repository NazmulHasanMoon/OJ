#include<stdio.h>
#define sz 150
#define szz 1000
char c[sz][szz];
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d %d",&n,&m)!=EOF)
    {

        getchar();
        k=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%c",&c[i][j]);
                getchar();
                if(c[i][j]=='C'||c[i][j]=='M'||c[i][j]=='Y')
                    k++;
            }
        }
        if(k>0)
            printf("#Color\n");
        else
            printf("#Black&White\n");

    }
    return 0;
}
