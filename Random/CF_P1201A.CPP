#include<bits/stdc++.h>
using namespace std;

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
#define sz 5002
int a[sz],cs[sz];
int main()
{
    faster
    int n,k,re(0),mx=0;
    string s[sz];
    cin>>n>>k;
    loop(i,0,n)
        cin>>s[i];
    loop(i,0,k)
        cin>>a[i];
    loop(i,0,k)
    {
        mx=0;
        map<char,int>mp;
        loop(j,0,n)
            mp[s[j][i]]++;
        loopa(j,mp)
            mx=max(mx,j.ss);
        re+=a[i]*mx;
    }
    cout<<re<<endl;
    return 0;
}
