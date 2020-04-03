#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100005
char ch[sz],c[sz];
int main()
{
    int n,j(1);
    sf("%d",&n);
    getchar();
    while(j<=n)
    {
        sf("%s %s",c,ch);
        long long s(0);
        for(int i=0; c[i]; i++)
            s+=int(c[i]-'0');

        if(s!=0)
        {
            s=s%9;
            if(s==0)
                s=9;
        }
        if(s==0||s==1)
            pf("Case %d: %d\n",j,s);
        else if(s==2)
        {
            int y=int(ch[0]-'0')%6;
            for(int i=1; ch[i]; i++)
                y=((y*10)+int(ch[i]-'0'))%6;
            if(y==0)
                pf("Case %d: 1\n",j);
            else if(y==1)
                pf("Case %d: 2\n",j);
            else if(y==2)
                pf("Case %d: 4\n",j);
            else if(y==3)
                pf("Case %d: 8\n",j);
            else if(y==4)
                pf("Case %d: 7\n",j);
            else if(y==5)
                pf("Case %d: 5\n",j);
        }
        else if(s==3||s==6)
        {
            int y=int(ch[0]-'0')%3;
            for(int i=1; ch[i]; i++)
                y=((y*10)+int(ch[i]-'0'))%3;
            if(y==0)
                pf("Case %d: 1\n",j);
            else if(y==1)
                pf("Case %d: %d\n",j,s);
            else
                pf("Case %d: 9\n",j);
        }
        else if(s==4||s==7)
        {
            int y=int(ch[0]-'0')%3;
            for(int i=1; ch[i]; i++)
                y=((y*10)+int(ch[i]-'0'))%3;
            if(y==0)
                pf("Case %d: 1\n",j);
            else if(y==1)
                pf("Case %d: %d\n",j,s);
            else if(y==2)
            {
                if(s==4)
                    s=7;
                else
                    s=4;
                pf("Case %d: %d\n",j,s);
            }

        }
        else if(s==5)
        {
            int y=int(ch[0]-'0')%6;
            for(int i=1; ch[i]; i++)
                y=((y*10)+int(ch[i]-'0'))%6;
            if(y==0)
                pf("Case %d: 1\n",j);
            else if(y==1)
                pf("Case %d: 5\n",j);
            else if(y==2)
                pf("Case %d: 7\n",j);
            else if(y==3)
                pf("Case %d: 8\n",j);
            else if(y==4)
                pf("Case %d: 4\n",j);
            else if(y==5)
                pf("Case %d: 2\n",j);
        }
        else if(s==8||s==9)
        {
            int y=int(ch[0]-'0')%2;
            for(int i=1; ch[i]; i++)
                y=((y*10)+int(ch[i]-'0'))%2;
            if(y==0)
                pf("Case %d: 1\n",j);
            else if(s==9)
                pf("Case %d: %d\n",j,s);

            else if(s==8)
            {
                if(y%2==0)
                    pf("Case %d: 1\n",j);
                else
                    pf("Case %d: 8\n",j);
            }

        }
        j++;
    }
    return 0;
}
