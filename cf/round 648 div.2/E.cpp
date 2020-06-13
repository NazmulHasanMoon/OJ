#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 501
ll a[sz];
int main()
{
    long long n,ans;
    cin>>n;
    ans=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=j;k<n;k++)
                ans=max(ans,a[i]|a[j]|a[k]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
