#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,d,mul;
    while(cin>>n>>m)
    {
        d=n-m+1;
        mul=1;
        for(ll i=n;i>=d;i--)
        {
            mul*=i;
            while(mul%10==0)
                mul/=10;
            mul%=100000000000;
        }
        cout<<mul%10<<'\n';
    }
    return 0;
}
