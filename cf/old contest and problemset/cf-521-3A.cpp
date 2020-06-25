#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    long long t,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        long long x=k/2;
        long long y=k-x;
        x*=b;
        y*=a;
        cout<<y-x<<'\n';
    }
    return 0;
}
