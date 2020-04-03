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
    int n,a,b,c,x;
    cin>>n;
    if(n%3==0)
    {
        a=1,b=1,c=n-2;
    }
    else
    {
        a=1,b=2;
        c=n-3;
    }
    cout<<a<<' '<<b<<' '<<c<<"\n";
    return 0;
}

