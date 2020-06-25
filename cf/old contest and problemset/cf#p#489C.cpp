#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int m,s,t;
    sf("%d %d",&m,&s);
    t=s;
    if(m*9<s||s==0&&m>1)
        pf("-1 -1\n");
    else if(m==1&&s<=9)
        pf("%d %d\n",s,s);
    else
    {
        int x;
        for(int i=m-1;i>=0; i--)
        {
            x=max(0,s-i*9);
            if(x==0&&s>=0&&i==0)
                x=s;
            else if(x==0&&i==m-1)
                x=1;
            s-=x;
            pf("%d",x);
        }
        pf("\n");
        for(int i=1;i<=m; i++)
        {
            x=min(9,t);
            t-=x;
            pf("%d",x);
        }
        pf("\n");
    }
    return 0;
}
