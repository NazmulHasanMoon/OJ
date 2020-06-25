#include<bits/stdc++.h>
using namespace std;
#define sz 200001
int arr[sz];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,n,a,tot,mx,m;
    cin>>t;
    while(t--)
    {
        tot=mx=m=0;
        cin>>n;
        int x=n+1;
        memset(arr,0,sizeof(arr[0])*x);
        for(int i=0;i<n;i++)
        {
            cin>>a;
            arr[a]++;
            m=max(m,a);
        }
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        for(int i=1;i<=m;i++)
            if(arr[i])tot++,mx=max(mx,arr[i]);
        if(mx==tot)cout<<tot-1<<'\n';
        else cout<<min(mx,tot)<<'\n';
    }
    return 0;
}
