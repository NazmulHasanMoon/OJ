#include<stdio.h>
#include<string.h>
#define sz 70002
char a[sz][4];
int main()
{
    long long int s,n,i,j;
    int m;
    while(scanf("%I64d %d",&n,&m)!=EOF)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",a[i]);
            getchar();
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(a[i],a[j])!=0){
                    s++;
                }
            }

        }
        printf("%I64d\n",s);
    }
    return 0;
}
