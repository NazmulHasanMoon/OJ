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
int main()
{
    faster
    int n,t,k,d,x,t1,j(0);
    cin>>n>>t>>k>>d;
    if(n<=k)
        return cout<<"no\n",0;
    x=ceil((n*1.0)/k);
    t1=0;
    bool flag=true;
    loop(i,0,x)
    {
        if(!j&&t1==d)
            j=1;
        else if(j||t1>d)
            return cout<<"yes\n",0;
        t1+=t;
        n-=k;
    }
    cout<<"no\n";
    return 0;
}
