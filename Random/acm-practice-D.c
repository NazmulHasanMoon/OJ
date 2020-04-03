#include<stdio.h>
#include<string.h>
#define sz 100000
char ch[sz];
int main()
{
    long long i,j,l,n,c,k;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d %I64d",&c,&k);
        getchar();
        l=0;
        scanf("%s",ch);
        for(j=0;j<c;j++)
        {
            if(ch[j]=='0')
                l++;
            if(ch[j]=='1')
                l=0;
            if(l==k+1)
                break;
        }
        if(l==k+1)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
