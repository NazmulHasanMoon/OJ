#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 102
int p[sz],s[sz];
int main()
{
    int n,x,i(1);
    sf("%d",&n);
    p[0]=0;
    while(n--)
    {
        sf("%d",&x);
        if(!x)
            p[i]=p[i-1]+1;
        else
            p[i]=p[i-1];
        i++;
    }
    i--;
    cout<<i-p[i-1]+1<<endl;
}
