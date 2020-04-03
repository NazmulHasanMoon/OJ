#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 1002
int a[sz];
int main()
{
    faster
    int n,c(0),mx=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool t=true;
    for(int i=1;i<n;i++)
    {
        if(a[i]-1==a[i-1])
            c++;
        else
        {
            mx=max(mx,c-1);
            t=false;
            c=0;
        }
    }
    if(!t)
        c--;
    mx=max(mx,c);
    cout<<mx<<'\n';
    return 0;
}
