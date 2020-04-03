#include<bits/stdc++.h>
using namespace std;
#define loopn(a,b,c)  for(int a=b;a>c;a--)
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
#define ll long long
vector<pair<int,int>>neg,pos;
#define sz 100001
int x[sz],y[sz];
int main()
{
    faster
    int n,p,l,r,z,idx(0);
    cin>>n;
    l=r=0;
    loop(i,0,n)
    {
        cin>>x[i]>>y[i];
        l+=x[i],r+=y[i];
    }
    z=abs(l-r);
    loop(i,0,n)
    {
        p=abs(l-x[i]+y[i]-r+y[i]-x[i]);
        ///cout<<p<<endl;
        if(z<p)
            z=p,idx=i+1;
    }
    cout<<idx<<endl;
    return 0;
}
