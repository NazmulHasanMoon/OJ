#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define rloop(a,b,c)  for(int a=c-1;a>=b;a--)
#define rlloop(a,b,c) for(long long a=c-1;a>=b;a--)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 100001
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)

#define si(a) sf("%d",&a)
#define sl(a) sf("%I64d",&a)
#define sii(a,b) sf("%d%d",&a,&b)
#define Pi(a) pf("%d\n",a)
#define Pin(a) pf("%d ",a)
#define Pl(a) pf("%I64d\n",a)
#define pln(a) pf("%I64d ",a)
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define case(x) cout<<"Case "<<x<<": "
map<int,int>m;
int main()
{
    faster
    int n,a,x(0),p,q,r(0),A;
    vector<int>vec1,vec2;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a,m[a]++;
        if(m[a]&1)
            vec1.push_back(a),r++;
        else
            vec2.push_back(a),x++;
    }
    sort(vec1.begin(),vec1.end());
    A=r;
    for(int i=r-2;i>=0;i--)
    {
        if(vec1[r-1]%vec1[i]!=0)
            vec2.push_back(vec1[i]),A--,x++;
    }
    sort(vec2.begin(),vec2.end());
    //sort(vec1.begin(),vec2.end());
    cout<<vec1[r-1]<<' '<<vec2[x-1]<<'\n';
    return 0;
}
