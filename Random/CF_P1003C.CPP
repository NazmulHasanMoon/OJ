#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 5002
int a[sz],cs[sz];
int main()
{
    faster
    int n,k,p;
    double mx(-1.0),l;
    cin>>n>>k;
    loop(i,0,n)
        cin>>a[i],cs[i+1]=cs[i]+a[i];
    ///mx=max(mx,(double)cs[k]/k);
    ///cout<<cs[k]<<endl;
    int j=0;
    loop(i,k,n+1)
    {
        p=0;
        loop(j,i-1,n)
        {
            l=double(cs[j+1]-cs[p+1]+a[p])/(i*1.0);
            ///cout<<l<<endl;
            if(l-mx>EPS)
                mx=l;
            p++;
        }
    }
    cout<<setprecision(12)<<fixed<<mx<<endl;
    return 0;
}
