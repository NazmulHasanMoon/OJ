/*************************************************************************************
                         ---------------------------
                   ------Bismillahir-Rahmanir-Rahim------
                         ---------------------------
            //     //   Name: MD: NAZMUL HASAN              //     //
           //     //    Institute: HSTU                    //     //
          //     //     Dept.: CSE                        //     //
        //     //      Email: nazmulmoon123@gmail.com   //     //
    -----------------------------------------------------------------------
            ---------- I Love Programming as Gaming ----------
**************************************************************************************/
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

/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57
///#define INT_MAX 2147483647
///#define INT_MIN -2147483647


const int MOD=1000000007;
typedef long long ll;
typedef unsigned long long ull;
string a;
int uni[27];
class seg
{
public:
    int cr[27];
    seg()///Constructor
    {
        loop(i,0,26)
        cr[i]=0;
    }
} tree[SIZE*4];
void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e||i<b)
        return;
    if(b==i&&i==e)
    {
        tree[node].cr[a[b]-'a']--;
        a[b]=newvalue;
        tree[node].cr[newvalue-'a']++;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    loop(i,0,26)
    tree[node].cr[i]=tree[left].cr[i]+tree[right].cr[i];
}
void query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return ;
    if(i<=b&&j>=e)
    {
        loop(i,0,26)
        if(tree[node].cr[i])uni[i]=1;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    query(left,b,mid,i,j);
    query(right,mid+1,e,i,j);
}
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].cr[a[b]-'a']++;
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    loop(i,0,26)
    tree[node].cr[i]=tree[left].cr[i]+tree[right].cr[i];
}
int main()
{
    int n,type,sz;
    string A;
    cin>>a>>n;
    sz=a.size();
    build(1,0,sz-1);

    unordered_set<char>S;
    while(n--)
    {
        cin>>type;
        if(type==2)
        {
            int l,r,ans(0);
            memset(uni,0,sizeof(uni));
            cin>>l>>r;
            query(1,0,sz-1,l-1,r-1);
            loop(i,0,26)
            if(uni[i])ans++;
            cout<<ans<<'\n';

        }
        else
        {
            int x;
            char nw;
            cin>>x>>nw;
            update(1,0,sz-1,x-1,nw);
        }
    }
    return 0;
}
