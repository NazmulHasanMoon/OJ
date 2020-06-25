#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 100002
#define ll long long
int main()
{
    int k,n,x,y,i(0);
    sf("%d",&k);
    x=k-1;
    n=0;
    if(k>=37)
    {
        pf("-1\n");
        return 0;
    }
    while(n<x)
    {
        n+=2;
        i++;
    }
    for(ll j=0; j<i; j++)
        pf("8");
    if(n<k)
        pf("4");
    pf("\n");
    return 0;
}
