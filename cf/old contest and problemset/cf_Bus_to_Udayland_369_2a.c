#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 1005
#define ss 10
char c[sz][ss];
int main()
{
    int i,j,k,l,n;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
                scanf("%c",&c[i][j]);
            getchar();
        }
        for(i=0;i<n;i++)
        {
            k=l=0;
            for(j=0;j<5;j++)
            {
                if(j!=2&&(c[i][j]=='o'||c[i][j]=='O'))
                {
                    k++;
                    if(k==2)
                    {
                        l=1;
                        c[i][j]='+';
                        c[i][j-1]='+';
                        break;
                    }

                }
                else
                    k=0;
            }
            if(l==1)
                break;
        }
        if(l==1){
            printf("YES\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<5;j++)
                    printf("%c",c[i][j]);
                printf("\n");
            }
        }
        else
            printf("NO\n");
    }
    return 0;
}
