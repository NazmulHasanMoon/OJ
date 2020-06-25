#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100003
#define ll long long
int a[sz];
double b;
int main()
{
    faster
    int n,k,m,p,q;
    cin>>n>>k>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    int i,j,y=n+1;
    q=m;
    double z(0.0),x;
    bool ck=false;
    //double z=double(a[n-1]*1.0)+double(k*1.0);
    if(m<n)
        i=m,m=0,ck=true;
    else if(m>=n)
        i=n-1,m=m-n+1;
    for(j=0;i<n;i++,j++){
        if(m>=k)
            z+=double(a[i]*1.0)+double(k*1.0),m-=k;
        else if(m)
            z+=double(a[i]*1.0)+double(m*1.0),m=0;
        else
            z+=double(a[i]*1.0);
    }
    x=z;
    z/=double(j*1.0);
    if(ck)
    {
        j++;
        for(int i=q-1;i>=0;i--,j++)
        {
            x=x+double(a[i]*1.0)+1;
            z=max(x/double(j*1.0),z);
            //cout<<x<<'!';
        }
       // cout<<x<<' '<<z<<endl;
    }
    //sort(z,z+y);
    cout<<setprecision(10)<<fixed<<z<<'\n';
    return 0;
}
