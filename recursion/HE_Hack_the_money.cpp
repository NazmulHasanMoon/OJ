#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool rec(ll n)
{
    if(n%10==0)
        if(rec(n/10)==1)return 1;
    if(n%20==0)
        if(rec(n/20)==1)return 1;
    if(n==1)
        return 1;
    else
        return 0;
}
int main()
{
    ll n,t;
    cin>>t;
    bool result;
    while(t--)
    {
        cin>>n;
        cout<<(rec(n)?"Yes\n":"No\n");
    }
    return 0;
}

