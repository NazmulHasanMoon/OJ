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
#define sz 200001
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
vector<int>v1,v2;
int a[sz];
int main()
{
    faster
    int n,j,k,l,y;
    cin>>n;
    loop(i,0,n)
    {
        cin>>a[i];
        if(a[i]==0)
            v1.pb(i);
    }
    j=v1.size();
    k=0,l=1;
    loop(i,0,n)
    {
        if(!a[i])
            v2.pb(0);
        else
        {
            if(l==j)
                v2.pb(abs(v1[k]-i));
            else if(v1[k]>i)
                v2.pb(v1[k]-i);
            else if(v1[l]>i)
                v2.pb(min(abs(v1[k]-i),(abs(v1[l]-i))));
            else
                i--,k++,l++;
        }
    }
    loopa(i,v2)
        cout<<i<<' ';
    return 0;
}
