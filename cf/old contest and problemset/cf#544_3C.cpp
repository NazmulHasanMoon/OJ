#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200002
#define ll long long
int a[sz],b[sz];
int main()
{
    faster
    int n,x(0);
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int y;
    for(int i=0;i<n;i++)
    {
        y=upper_bound(a+i,a+n,a[i]+5)-a;
        y-=i;
        //cout<<y<<' '<<a[i]<<endl;
        x=max(x,y);
    }
    cout<<x<<'\n';
    return 0;
}
