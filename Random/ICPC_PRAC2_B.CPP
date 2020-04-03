#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int a[sz];
int gcd(int a,int b)
{
    if(b>a)
        return gcd(b,a);

    if(b==0)
        return a;

    else
        return gcd(b,a%b);
}
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        int n,p(0);
        cin>>n;
        cin>>a[0];
        ll x(0);
        int r=a[0];
        x+=a[0];
        for(int i=1; i<n; i++)
        {
            cin>>a[i];
            r=gcd(r,a[i]);
            x+=a[i];
        }
        cout<<x<<' '<<r<<'\n';
    }
    return 0;
}

