#include<stdio.h>
#include<string.h>
#define sz 105
#define ss 20
char c[sz][ss],ch[sz];
int main()
{
    int i,j,k,n,s,count;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        getchar();
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",c[i]);
            getchar();
            s=0;
            for(j=0;j<strlen(c[i]);j++)
            {
                if(c[i][j]=='4'||c[i][j]=='7')
                {
                    s++;
                    if(s>k)
                        break;
                }
            }
            if(s<=k)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
