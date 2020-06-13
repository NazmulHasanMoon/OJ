#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define ll long long
int main()
{
    int t,n,x,y,s;
    sf("%d",&t);
    while(t--)
    {
        char c[20],ch[20];
        sf("%d %s\n",&n,c);
        s=0;
        for(int i=0;i<n;i++)
        {
            sf("%s",ch);
            if(ch[8]=='W'){
                sf("%d",&x),s+=300;
                if(x<=20)s+=20-x;
            }
            else if(ch[0]=='B')
                sf("%d",&x),s+=x;
            else if(ch[0]=='T')s+=300;
            else s+=50;
        }
        int ans;
        if(c[0]=='I')ans=s/200;
        else ans=s/400;
        pf("%d\n",ans);
    }
    return 0;
}
