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
    int n,m,x,y;
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>x>>y;
    for(int i=0;i<n;i++)
    {
        if(i&1)
            cout<<'1';
        else
            cout<<'0';
    }
    cout<<'\n';
    return 0;
}

