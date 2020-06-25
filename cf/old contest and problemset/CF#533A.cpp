#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 1002
int a[sz];
int main()
{
    faster
    int n,t,re,c(0),s=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<=100;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            t=abs(a[j]-i);
            if(t>1)
                c+=(t-1);
        }
        if(s>c)
        {
            s=c;
            re=i;
        }
    }
    cout<<re<<' '<<s<<'\n';
    return 0;
}
