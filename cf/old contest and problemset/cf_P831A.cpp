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
int main()
{
    faster
    int n,x,y,i,j,k;
    /////i=j=k=0;
    bool in,con,dec;
    in=con=dec=false;
    cin>>n>>x;
    if(n==1)
        return cout<<"yes\n",0;
    n--;
    while(n--)
    {
        cin>>y;
        if(y>x&&!dec&&!con)
            in=true;
        else if(x==y&&!dec)
            con=true;
        else if(y<x)
            dec=true;
        else
            return cout<<"no\n",0;
        x=y;
    }
    cout<<"yes\n";
    return 0;
}
