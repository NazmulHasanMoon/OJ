#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
#define rn PI/180
#define sf scanf
#define pf printf
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200002
#define loop(a,b,c)   for(int a=b;a<c;a++)
vector<pair<int,pair<int,int>>>v;
int a[sz];
int main()
{
    faster
    int k,n,x,s,l(0);
    cin>>k;
    loop(i,0,k)
    {
        cin>>n;
        s=0;
        loop(j,0,n)cin>>a[j],s+=a[j];
        loop(j,0,n)v.pb({s-a[j],{i+1,j+1}}),l++;
    }
    stable_sort(v.begin(),v.end());
    for(int i=1; i<l; i++)
    {
        if(v[i].ff==v[i-1].ff&&v[i].ss.ff!=v[i-1].ss.ff)
        {
            cout<<"YES\n"<<v[i-1].ss.ff<<' '<<v[i-1].ss.ss<<'\n'<<v[i].ss.ff<<' '<<v[i].ss.ss<<'\n';
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
