#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 1100000
int ans(int x,int i)
{
    int y=0;
    if(x==1)
        return i+1;
    for(; x; x/=10)
        y++;
    return  ans(y,i+1);
}
int main()
{
    char c[sz];
    while(sf("%s",c),c[0]!='E')
    {
        if(strlen(c)==1&&c[0]=='1')
            pf("1\n");
        else
            printf("%d\n",ans(strlen(c),1));
    }
    return 0;
}
