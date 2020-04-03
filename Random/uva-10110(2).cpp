#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll x,m,n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        x=(ll)sqrt(n*1.0);
        if(x*x==n)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
