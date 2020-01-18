#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
vector<ll>v;
int main()
{
    faster
    int n;
    ll x,k,p,q,r,st,mid,fin;

    cin>>n>>k;
    loop(i,0,n)
    {
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    st=1;
    fin=2000000000;
    while(st<fin)
    {
        mid=(st+fin+1)/2;
        //cout<<mid<<endl;
        q=0;
        loop(i,n/2,n)
        {
            if(mid-v[i]>0)q+=mid-v[i];
            //cout<<q<<'!';
            if(q>k)
                break;

        }
        if(q>k)
            fin=mid-1;
        else
            st=mid;
    }
    cout<<st<<endl;
    return 0;
}
