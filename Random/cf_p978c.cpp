#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define sz 200001
#define ll long long
ll a[sz],b[sz];
int main()
{
    faster
    int x,y;
    cin>>x>>y;
    ll d,r,p,q(0);
    for(int i=0;i<x;i++)
        cin>>a[i];
    for(int i=0;i<y;i++)
        cin>>b[i];
    p=a[0];
    for(int i=0,j=0;i<x&&j<y;)
    {

        if(b[j]>p)
        {
            i++;
            q=p;
            p+=a[i];
        }
        else
        {
            cout<<i+1<<' '<<b[j]-q<<'\n';
            j++;
        }
    }
    return 0;
}
