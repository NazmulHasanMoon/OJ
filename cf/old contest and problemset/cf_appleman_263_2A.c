#include<stdio.h>
#include<string.h>
#define sz 204
char c[sz][sz];
int main()
{
    int i,j,k,l,n,s;
    scanf("%d",&n);
        getchar();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%c",&c[i][j]);
            }
            getchar();
        }
        l=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                s=0;
                if(c[i+1][j]=='o')
                    s++;
                if(c[i][j+1]=='o')
                    s++;
                if(c[i-1][j]=='o')
                    s++;
                if(c[i][j-1]=='o')
                    s++;
                if(s%2!=0)
                {
                    l=0;
                    break;
                }
            }
            if(l==0)
                break;
            else
                l++;
        }
        if(l>0)
            printf("YES\n");
        else
            printf("NO\n");
    return 0;
}
