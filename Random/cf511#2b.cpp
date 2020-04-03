#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    faster
    int n,x,y,a,b;
    cin>>n;
    x=-1;
    y=x;
    while(n--)
    {
        cin>>a>>b;
        x=max(x,a+b);
    }
    cout<<x<<'\n';
    return 0;
}

