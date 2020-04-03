#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 300002
#define ll long long
ll a[sz],cum;
int main()
{
    faster
    int n,m,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    cum=a[0];
    //cout<<cum<<endl;
    for(int i=1;i<n;i++)
        cum+=a[i];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        cout<<cum-a[x-1]<<'\n';
    }
    cout<<'\n';
    return 0;
}
