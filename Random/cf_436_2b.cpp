#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sz 202
map<char,int>mp[sz];
char c;
int main()
{
    int n,j(0);
    sf("%d\n",&n);
    for(int i=0; i<n; i++)
    {
        sf("%c",&c);
        if(c>='A'&&c<='Z')
            j++;
        else if(islower(c))
            mp[j][c]=1;
    }
    int x=0;
    if(!mp[0].empty())
        x=mp[0].size();
    if(j==0)
        pf("%d\n",x);
    else
    {
        for(int i=1; i<=j; i++)
        {
            int y=0;
            if(!mp[i].empty())
                y=mp[i].size();
            x=max(x,y);
        }
        pf("%d\n",x);
    }
    return 0;
}
