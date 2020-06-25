#include<bits/stdc++.h>
using namespace std;
#define sz 105
#define sf scanf
#define pf printf
int a[sz];
int main()
{
    int n,x,s(0),y;
    bool t=0;
    sf("%d %d",&n,&x);
    for(int i=0; i<n; i++)
    {
        sf("%d",&y);
        a[y]++;
    }
    for(int i=0;i<x;i++)
        if(!a[i])
            s++;
    if(a[x])
        s++;
    pf("%d\n",s);
    return 0;
}
