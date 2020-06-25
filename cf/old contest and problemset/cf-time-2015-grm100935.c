#include<stdio.h>
#define sz 200
int h[sz],m[sz],s[sz];
long long c[sz];
int main()
{
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d %d %d",&h[j],&m[j],&s[j]);
            c[j]=3600*h[j]+60*m[j]+s[j];
        }
        if(c[0]==c[1])
            printf("Case %d: Yes\n",i+1);
        else
            printf("Case %d: No\n",i+1);
    }
    return 0;
}
