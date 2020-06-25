#include<bits/stdc++.h>
using namespace std;
#define sz 30002
int a[sz];
int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=1;i<n;i++)
        cin>>a[i];
    a[n]=1;
    for(int i=1;i<=n;i+=a[i])
    {
        if(i==t){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
