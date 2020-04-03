#include<bits/stdc++.h>
#include<cstring>
#define sz 200
using namespace std;
char c[sz];
int main()
{
    int n,t,s(0);
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        getchar();
        for(int j=0;j<n;j++)
            scanf("%c",&c[j]);
        s=0;
        for(int j=0;j<n;j++)
        {
            if(c[j]=='#'&&c[j+1]=='.'&&(j+1)<n)
            {
                s++;
                c[j+1]='0';

            }
            else if((j-1)>=0&&c[j]=='#'&&c[j-1]=='.'&&c[j+1]=='.'){
                c[j+1]='0';
                s++;
            }
            else if((j-1)>=0&&c[j]=='#'&&c[j-1]=='.'){
                    s++;
                }
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
