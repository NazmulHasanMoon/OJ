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
#define sz 150002
int a[sz];
unordered_map<int,bool>m;
int main()
{
    faster
    int n,re(0);
    cin>>n;
    loop(i,0,n)
    cin>>a[i];
    sort(a,a+n);
    loop(i,0,n)
    {
        if(a[i]>1&&m[a[i]-1]==false)
            m[a[i]-1]=true;
        else if(m[a[i]]==false)
            m[a[i]]=true;
        else if(m[a[i]+1]==false)
            m[a[i]+1]=true;
    }
    cout<<m.size()<<endl;
    return 0;
}
