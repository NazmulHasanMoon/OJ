#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sz 100002
typedef long long ll;
int a[sz],b[sz];
int main()
{
    int n;
    ll s,c;
    s=c=0;
    sf("%d",&n);
    for(int i=0;i<n;i++)
        sf("%d",&a[i]),s+=a[i];
    for(int i=0;i<n;i++)
        sf("%d",&b[i]);
    sort(b,b+n);
    //cout<<b[n-1]<<' '<<b[n-2];
    c=b[n-1]+b[n-2];
    if(c>=s)
        pf("yes\n");
    else
        pf("no\n");
    return 0;
}
