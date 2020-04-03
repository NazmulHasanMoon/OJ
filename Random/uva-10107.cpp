#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define sz 10002
ll a[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    int i(0);
    while(cin>>a[i++])
    {
        sort(a,a+i);
        if(i&1)
            cout<<a[i/2]<<'\n';
        else
            cout<<(a[i/2]+a[(i-1)/2])/2<<'\n';
    }
    return 0;
}
