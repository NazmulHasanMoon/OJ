#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
typedef long long ll;
#define sz 1000005
int a[sz];
int main()
{
    int n,s,c(1);

    sf("%d",&n);
    s=n;
    for(int i=1;i<=n;i++)
        sf("%d",&a[i]);
    int l=n-a[n],p=n;
    for(int i=n-1;i>=1;i--)
    {
        int y=a[i],k=i-y;
        //cout<<k<<l<<endl;
        if(k<l){
            if(n-a[p]>i&&i<l)
                c++,p=i;
            l=k;
            //cout<<l<<' ';
        }
    }
    pf("%d\n",c);
    return 0;
}

