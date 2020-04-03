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
bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.ff>=b.ff)
        return a.ss>=b.ss;
    else
        return false;
}
int main()
{
    vector<pair<int,int>>v;
    set<pair<int,int>>book;
    int n,w,l,k,mx(0);
    si(n);
    loop(i,0,n)
    {
        si(w),si(l);
        if(l<w)
            swap(l,w);
        v.pb({w,l});
    }
    sort(v.begin(),v.end(),comp);
    loop(i,0,n)
    {
        book.clear();
        book.insert(v[i]);
        k=1;
        loop(j,i+1,n)
        {
            if(book[k-1].ff>v[j].ff&&book[k-1].ss>v[j].ss)
            {
                book.pb(v[j]);
                k++;
            }
        }
        mx=max(mx,k);
    }
    Pi(mx);
    return 0;
}
