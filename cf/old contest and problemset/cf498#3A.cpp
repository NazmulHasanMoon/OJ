#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 10001
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n;
    if(n==1)
    {
        cin>>x;
        if(x%2==0)
            cout<<x-1<<'\n';
        else
            cout<<x<<'\n';
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
            cout<<x-1<<' ';
        else
            cout<<x<<' ';
    }
    return 0;
}
