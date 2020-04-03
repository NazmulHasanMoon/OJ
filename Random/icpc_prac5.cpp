#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 1000002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll unsigned long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
ll a[sz];
int main()
{
    faster
    int n;
    ll mx,mn,s;
    mn=9e18;
    mx=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            s=a[i]+a[j];
            cout<<s<<' '<<mx<<' '<<mn<<endl;
            if(mx<s)
                mx=s;
            if(mn<mn)
                mn=s;
        }
    }
    cout<<mn<<' '<<mx<<'\n';
    return 0;
}

