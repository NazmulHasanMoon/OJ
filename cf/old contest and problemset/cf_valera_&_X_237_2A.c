#include<stdio.h>
#include<string.h>
#define sz 1000
char c[sz][sz];
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%c",&c[i][j]);
        getchar();
    }
    if(c[0][0]==c[0][1])
    {
        printf("NO\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||i+j+1==n)
            {
                if(c[i][j]!=c[0][0])
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else if(c[i][j]!=c[0][1])
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
