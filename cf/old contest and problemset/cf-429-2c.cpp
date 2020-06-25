#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf

int main()
{
    int n;
    sf("%d",&n);
    int a[n],b,r[n];
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
        sf("%d",&a[i]);
    for(int i=0;i<n;i++)
        sf("%d",&b),v.push_back({b,i});
    sort(a,a+n);
    sort(v.begin(),v.end());
    vector<pair<int,int> >::iterator it=v.begin();
    for(int i=n-1;it!=v.end();it++,i--)
        r[it->second]=a[i];
    for(int i=0;i<n;i++)
        pf("%d ",r[i]);
    pf("\n");
    return 0;
}
