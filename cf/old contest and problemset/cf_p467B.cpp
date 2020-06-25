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
#define sz 10002
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
vector<int>v1,v2;
int x[sz];
int countSetBits(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}
int main()
{
    faster;
    int n,m,k,y,z,re(0);
    cin>>n>>m>>k;
    m++;
    loop(i,0,m)
        cin>>x[i];
    ///sort(x,x+m);
    y=x[m-1];
    loop(i,0,m-1)
    {
        y=x[m-1]^x[i];
        //cout<<y<<' ';
        z=countSetBits(y);
        if(z<=k)
            re++;
    }
    cout<<re<<endl;
    return 0;
}

