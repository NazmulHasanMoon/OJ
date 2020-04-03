#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf scanf
#define pf printf
int main()
{
    ll x,y,re(0),z;
    sf("%lld %lld",&x,&y);
    while(x<=y)
    {
        x*=2;
        re++;
    }
    cout<<re<<'\n';
    return 0;
}
