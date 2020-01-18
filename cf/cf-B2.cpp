#include<bits/stdc++.h>
#include<cstring>
#define sz 3001
#define ss 12
using namespace std;
char c[sz][ss],cc[sz][ss];
char ch[sz][ss],s[sz][ss];
int main()
{
    int n,m,l1,l2;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        l1=l2=0;
        for(int i=0;i<m;i++)
        {
            scanf("%s",c[i]);
            //getchar();
            scanf("%s",cc[i]);
            //getchar();

        }
        for(int i=0;i<n;i++)
        {
            scanf("%s",ch[i]);
            //getchar();
            for(int j=0;j<m;j++)
            {
                int x,y;
                x=strcmp(c[j],ch[i]);
                y=strcmp(cc[j],ch[i]);
                if(x==0)
                {
                    l1=strlen(c[j]);
                    l2=strlen(cc[j]);
                    if(l1<=l2)
                        strcpy(s[i],c[j]);
                    else
                        strcpy(s[i],cc[j]);
                }
                else if(y==0)
                {
                    l1=strlen(c[j]);
                    l2=strlen(cc[j]);
                    if(l1<l2)
                        strcpy(s[i],c[j]);
                    else
                        strcpy(s[i],cc[j]);
                }
            }
        }
        for(int i=0;i<n-1;i++)
        {
            printf("%s ",s[i]);
        }
        printf("%s\n",s[n-1]);
    }
    return 0;
}
