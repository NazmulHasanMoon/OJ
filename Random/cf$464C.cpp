#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define ll long long
#define sz 100005
int a[sz];
int main()
{
    int n,s,f,mx,e;
    mx=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mx<a[i])
        {
            mx=a[i];
            e=i+1;
        }
    }
    cin>>s>>f;
    int t,l=f-s,z(0),m;
    m=l;
    for(int i=e-2;i>=0&&l>0;i--)
    {
        z+=a[i];
        l--;
    }
    int w(0);
    for(int i=e;i<n&&m>0;i++)
    {
        w+=a[i];
        if(w>z)
            e=i;
        m--;
    }
    cout<<e<<endl;
    return 0;
}
