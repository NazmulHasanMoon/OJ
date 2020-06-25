#include<bits/stdc++.h>
using namespace std;
int a[31],b[31];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        int s=0;
        for(int i=0;i<k;i++)
            s+=max(a[i],b[i]);
        for(int i=k;i<n;i++)
            s+=a[i];
        cout<<s<<'\n';
    }
    return 0;
}
