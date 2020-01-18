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
    int n,m,d,x,y;
    cin>>n>>m;
    if(m%n!=0)
        return cout<<"-1\n",0;
    d=m/n;
    x=y=0;
    while(d%2==0)
    {
        d/=2;
        x++;
    }
    while(d%3==0)
    {
        d/=3;
        y++;
    }
    if(d>1)
        cout<<"-1\n";
    else
        cout<<x+y<<endl;
}
