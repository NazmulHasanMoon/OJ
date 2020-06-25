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
#define sz 102
int a[sz];
int main()
{
    faster
    int n,p,q,x,y,re;
    cin>>n;
    /*a[1]=1;
    loop(i,1,n+1)
        a[i]=i+a[i-2];
    cout<<a[n]<<endl;*/
    re=((n/2)+1)*(int)ceil(n/2.0);
    ///cout<<ceil(n/2)<<endl;
    cout<<re<<endl;
    return 0;
}
