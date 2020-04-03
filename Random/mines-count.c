#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sz 104
char c[sz][sz];
int main()
{
    int i,j,k,l,m,n,x,y,t;
    t=1;
    while(1)
    {
        scanf("%d %d",&n,&m);
        getchar();
        if(n==0&&m==0)
            break;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%c",&c[i][j]);

            }
            getchar();
        }
        printf("\nField #%d:\n",t);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                x=0;
                if(i==0&&j==0&&c[i][j]!='*')
                {
                    if(c[i][j+1]=='*')
                       x+=1;
                    if(c[i+1][j]=='*')
                        x+=1;
                    if(c[i+1][j+1]=='*')
                        x++;
                    printf("%d",x);
                }
                else if(i==0&&j==m-1&&c[i][j]!='*')
                {
                    if(c[i][j-1]=='*')
                       x++;
                    if(c[i+1][j]=='*')
                        x+=1;
                    if(c[i+1][j-1]=='*')
                        x++;
                    printf("%d",x);
                }
                else if(i==n-1&&j==0&&c[i][j]!='*')
                {
                    if(c[i][j+1]=='*')
                       x++;
                    if(c[i-1][j]=='*')
                        x+=1;
                    if(c[i-1][j+1]=='*')
                        x++;
                    printf("%d",x);
                }
                else if(i==n-1&&j==m-1&&c[i][j]!='*')
                {
                    if(c[i][j-1]=='*')
                       x++;
                    if(c[i-1][j]=='*')
                        x++;
                    if(c[i-1][j-1]=='*')
                        x++;
                    printf("%d",x);
                }
                else if(i>0&&i<n-1&&j==0&&c[i][j]!='*')
                {
                    if(c[i-1][j]=='*')
                        x++;
                    if(c[i-1][j+1]=='*')
                        x++;
                    if(c[i+1][j]=='*')
                        x++;
                    if(c[i][j+1]=='*')
                        x++;
                    if(c[i+1][j+1]=='*')
                        x++;
                    printf("%d",x);
                }
                else if(i>0&&i<n-1&&j==m-1&&c[i][j]!='*')
                {
                    if(c[i-1][j]=='*')
                        x++;
                    if(c[i+1][j]=='*')
                        x++;
                    if(c[i][j-1]=='*')
                        x++;
                    if(c[i+1][j+1]=='*')
                        x++;
                    if(c[i-1][j+1]=='*')
                        x++;
                    printf("%d",x);
                }
                else if(i==0&&j>0&&j<m-1&&c[i][j]!='*')
                {
                    if(c[i+1][j]=='*')
                        x++;
                    if(c[i][j-1]=='*')
                        x++;
                    if(c[i][j+1]=='*')
                        x++;
                    if(c[i+1][j-1]=='*')
                        x++;
                    if(c[i+1][j+1]=='*')
                        x++;
                    printf("%d",x);
                }
                else if(i==n-1&&j>0&&j<m-1&&c[i][j]!='*')
                {
                    if(c[i-1][j]=='*')
                        x++;
                    if(c[i][j-1]=='*')
                        x++;
                    if(c[i][j+1]=='*')
                        x++;
                    if(c[i-1][j-1]=='*')
                        x++;
                    if(c[i-1][j+1]=='*')
                        x++;
                    printf("%d",x);
                }
                else if(i>0&&i<n-1&&j>0&&j<m-1&&c[i][j]!='*')
                {
                    if(c[i-1][j]=='*')
                        x++;
                    if(c[i+1][j]=='*')
                        x++;
                    if(c[i][j-1]=='*')
                        x++;
                    if(c[i][j+1]=='*')
                        x++;
                    if(c[i-1][j-1]=='*')
                        x++;
                    if(c[i-1][j+1]=='*')
                        x++;
                    if(c[i+1][j-1]=='*')
                        x++;
                    if(c[i+1][j+1]=='*')
                        x++;
                    printf("%d",x);
                }
                else
                    printf("%c",c[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        t++;
    }
    return 0;
}
