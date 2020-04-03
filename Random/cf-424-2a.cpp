#include<bits/stdc++.h>
using namespace std;
#define sz 105
int a[sz];
int main()
{
    int n,l;
    cin>>n;
    l=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    bool t,f;
    t=f=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1]&&f==0)
            t=1;
        else if(a[i]<a[i+1]&&f==1)
            t=0;
        else if(a[i]>a[i+1]&&t==1)
            f=1;
    }
    if(t==1&&f==1)
        cout<<"YES\n";
    else if(t==0&&f==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
