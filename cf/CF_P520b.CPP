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
#define sz 1000000

queue<int>Q;
int lv[sz];
bool vis[sz];
int main()
{
    faster
    ll n,m,u,y;
    cin>>n>>m;
    lv[n]=0;
    vis[n]=1;
    Q.push(n);
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        if(u==m)
        {
            cout<<lv[u]<<endl;
            return 0;
        }
        if(u<m&&lv[u*2]==0)
        {
            Q.push(u*2);
            lv[u*2]=lv[u]+1;
        }
        if(u>1&&lv[u-1]==0)
        {
            Q.push(u-1);
            lv[u-1]=lv[u]+1;
        }
    }
    //cout<<lv[m]<<'\n';
    return 0;
}
