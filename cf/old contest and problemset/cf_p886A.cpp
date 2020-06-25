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
#define sz 100
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
vector<int>v1,v2;
int a[sz];
unordered_set<int>s;
int main()
{
    faster
    int x,re(0);
    loop(i,0,6)
        cin>>a[i],re+=a[i];
    if(re&1)
        return cout<<"NO\n",0;
    re/=2;
    loop(i,0,6)
    {
        loop(j,i+1,6)
        {
            loop(k,j+1,6)
            {
                if(a[i]+a[j]+a[k]==re)
                    return cout<<"YES\n",0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
