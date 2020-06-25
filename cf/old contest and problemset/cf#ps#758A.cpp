#include<bits/stdc++.h>
using namespace std;
#define sz 102
int a[sz];
int main()
{
    int n,mx=INT_MIN;
    cin>>n;
    long long s(0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++)
        s+=(mx-a[i]);
    cout<<s<<endl;
    return 0;
}
