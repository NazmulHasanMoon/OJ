#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100000001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all(x)   x.begin(),x.end()

using namespace std;

/*----------------- Start Here ----------------*/
long long a[100];
int LB(long long n,long long key)
{
    long long b=0,e=n,m;
    while(b<=e)
    {
        m=(b+e)/2;
        if(a[m]==key)
            e=m-1;
        else if(a[m]>key)
            e=m-1;
        else if(a[m]<key)
            b=m+1;
    }
    return b;
}
int main()
{
    long long key,x,y,n=2e18;
    vector<long long>v;
    int j=0;
    long long mn,mx;
    for(long long i=1; i<=n; i*=2)
        a[j++]=i;
    cin>>x>>y;
    if(y==1){
        cout<<x<<endl;
        return 0;
    }
    mx=max(x,y);
    mn=min(x,y);
    key=LB(j,mx);
    if(a[key]>mx)
        key--;
    //cout<<a[key]<<endl;
         cout<<(a[key]^a[key]-1)<<endl;
    return 0;
}

