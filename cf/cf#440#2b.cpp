#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100005
int a[sz];
int main()
{
    int mn=INT_MAX,mx=INT_MIN;
    int n,k,l1,l2;
    sf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        sf("%d",&a[i]);
        if(mx<a[i])
            mx=a[i],l1=i+1;
        if(mn>a[i])
            mn=a[i],l2=i+1;
    }
    if(k==1)
        pf("%d\n",mn);
    else
    {
        int x=n-l1;
        if((!x||x!=n-1)&&k==2)
            pf("%d\n",max(a[0],a[n-1]));
        else
            pf("%d\n",mx);
    }
    return 0;
}
