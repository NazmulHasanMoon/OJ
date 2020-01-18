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
#define ll long long
#define sz 100001
int a[sz];
bool c[sz];
map<int,ll>m;
int main()
{
    faster
    ll n,x,re(0);
    cin>>n;
    loop(i,0,n)
    {
        cin>>a[i];
        m[a[i]]++;
        c[a[i]]=1;
    }
    x=m.size();
    loop(i,0,n)
    {
        m[a[i]]--;
        if(!m[a[i]])
            m.erase(a[i]),x--;
        if(c[a[i]])
        {
            re+=x;
            c[a[i]]=false;
        }
    }
    cout<<re<<endl;
    return 0;
}
