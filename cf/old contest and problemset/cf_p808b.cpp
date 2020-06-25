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
#define sz 200002
unordered_map<int,int>ma;
ll a,csum[sz];
int main()
{
    faster
    int n,k,j(0);
    ll re(0);
    double avg;
    cin>>n>>k;
    loop(i,1,n+1)
    {
        cin>>a;
        csum[i]=csum[i-1]+a;
    }
    int x=n-k+1;
    for(int i=x;i<=n;i++,j++)
        re+=(csum[i]-csum[j]);
    avg=re/(x*1.0);
    cout<<setprecision(12)<<fixed<<avg<<'\n';
    return 0;
}
