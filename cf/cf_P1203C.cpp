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
unordered_set<ll>s;
int main()
{
    faster
    ll n,a,re,x;
    re=x=0;
    cin>>n;
    lloop(i,0,n)
    {
        cin>>a;
        s.insert(a);
        x=a;
    }
    loopa(i,s)
    x=gcd(x,i);
    ///cout<<x<<endl;
    //cout<<x/2<<endl;
    n=(x/2)+1;
    for(ll i=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            re++;
            if((i*i)!=x)
                re++;
        }
    }
    cout<<re<<endl;
    return 0;
}
