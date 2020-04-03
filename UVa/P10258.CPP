
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
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;



typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        new_data_set;
#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define rloop(a,b,c)  for(int a=c-1;a>=b;a--)
#define rlloop(a,b,c) for(long long a=c-1;a>=b;a--)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-10
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 2000002
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
typedef vector<int>vi;
typedef vector<ll>vl;
typedef vector<string> vs;
typedef stack<int> si;
typedef stack<string> ss;
typedef queue<int> qi;
typedef queue<string> qs;
typedef pair<int,int> pii;
typedef pair<string,int>psi;
typedef map<int,int>mii;
typedef map<string,int>msi;
///      direction
int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx8[]= {0,0,+1,-1,-1,+1,-1,+1};
int dy8[]= {-1,+1,0,0,+1,+1,-1,-1};


/*ll nCr(ll aan, ll aar)
{
    ll ii, aac=1;
    for(ii=1; ii<=aar; ii++)
    {
        aac*=(aan-aar+ii);
        aac/=ii;
    }
    return aac;
}

bool status[1100002];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
}

ll big_mod(ll base, ll power, ll mod)
{
    if(power==0) return 1;
    if(power&1)
    {
        ll p1=base%mod;
        ll p2=(big_mod(base, power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else
    {
        ll p1=(big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
ll modInverseBigMod(ll a,ll m)  //a*x=1(mod m)
{
    return big_mod(a,m-2,m);
}**/



/*ll nCr(ll n, ll k)
{
    ll C[n+1][k+1];
    ll i, j;

    // Caculate value of Binomial Coefficient in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previosly stored values
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    return C[n][k];
}*/
///START YOUR CODE FROM HERE.... Happy Coding.... ! ;)
///vector<pair<int,pair<int,int>>>v;
struct ve
{
    int sl[10],pn[10],tpn,id,att;
    unordered_set<int>os;
}v[102];
bool comp(ve a,ve b)
{
    if(a.os.size()==b.os.size())
    {
        if(a.tpn==b.tpn)

            return a.id<b.id;

        return (a.tpn<b.tpn);
    }
    return (a.os.size()>b.os.size());
}
//new_data_set vec;
int main()
{
    ///faster
    //ifstream in("popcorn.txt");
    //ofstream out("file.txt");

    int n,x,y,z,p;
    sf("%d\n",&n);
    char s;
    char st[250];
    while(n--)
    {
        for(int i=0; i<=100; i++)
        {
            mem(v[i].pn,0);
            mem(v[i].sl,0);
            v[i].tpn=0;
            v[i].att=0;
            v[i].os.clear();
        }
        while(gets(st)&&st[0]!='\0')
        {
            sscanf(st,"%d %d %d %c",&x,&y,&z,&s);
            v[x].id=x;
            v[x].att=1;
            if(s=='I'&&!v[x].sl[y])
                v[x].pn[y]++;
            else if(s=='C'&&!v[x].sl[y]){
                v[x].sl[y]=1;
                v[x].tpn+=z+(v[x].pn[y]*20);
                v[x].os.insert(y);
            }
        }
        sort(v,v+101,comp);
        for(int i=0; i<=100; i++)
        {
                if(v[i].att>0)
                    pf("%d %d %d\n",v[i].id,v[i].os.size(),v[i].tpn);
        }
        if(n)
            pf("\n");

    }
    return 0;
}


