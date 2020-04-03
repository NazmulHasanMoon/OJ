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
#define sz 401
int a[sz],b[sz];
vector<int>v;
unordered_map<int,bool>m;
int main()
{
    faster
    int q,n,m,l;
    bool ck;
    cin>>q;
    while(q--)
    {
        cin>>n;
        m=n;
        v.clear();
        ck=true;
        n*=4;
        loop(i,0,n)
            cin>>a[i];
        sort(a,a+n);
        for(int j=0,l=n-1;j<n;j++,l--)
        {
            if(a[j]!=a[j+1]||a[l]!=a[l-1]){
                ck=false;///return cout<<"NO\n",0;
                break;
            }
            j++,l--;
            v.pb(a[j]*a[l]);
        }
        if(ck){
        loop(i,1,m)
        {
            if(v[i]!=v[i-1]){
                ck=false;
                break;///return cout<<"NO\n",0;
            }
        }
        }
        if(ck)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
