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
#define sz 200002
vector<int>v[sz],lv[3];
int level[sz],a[3];
///unordered_set<int>par;
void bfs(int s)
{
    queue <int> q;
    q.push(s);
    level[s]=0 ;
    a[0]++;
    lv[0].pb(s);
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        ///par.insert(p);
        loopa(i,v[p])
        {
            if(level[i] == -1)
            {
                q.push(i);
                level[i]=1-level[p];
                lv[level[i]].pb(i);
                a[level[i]]++;
            }
        }
    }
}
int main()
{
    faster
    int q,n,m,x,y,mn,re,p,z;
    cin>>q;
    while(q--)
    {
        ///mem(level,-1);
        re=0;
        cin>>n>>m;
        n++;
        loop(i,1,n)
            v[i].clear(),level[i]=-1;
        loop(i,0,m)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bfs(1);
        int i=1;
        if(a[0]<a[1])
            i=0,cout<<a[0]<<'\n';
        else
            cout<<a[1]<<'\n';
        loopa(j,lv[i])
            cout<<j<<' ';
        cout<<'\n';
        //par.clear();
        lv[0].clear();
        lv[1].clear();
        a[0]=a[1]=0;
    }
    return 0;
}
