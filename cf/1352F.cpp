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
#define SIZE 8001
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
int main()
{
    faster
    int t;
    cin>>t;
    int n,a,b,c;
    string s;
    while(t--)
    {
        cin>>a>>b>>c;
        n=-1;
        s.clear();
        if(a)
        {
            a++;
            while(a--)
                s+='0';
            n=0;
        }
        if(!n&&b)
        {
            int x=b/2;
            while(x--)s+="10";
            if(b%2)s+='1';
        }
        else if(n&&b)
        {
            s+="01";
            b--;
            int x=b/2;
            while(x--)s+="01";
            if(b%2)s+='0';
        }
        if(!s.empty())n=s.back()-'0';
        if(n==1&&c)
            while(c--)s+='1';
        else if(n==0&&c){
            s.pop_back();
            while(c--)s+='1';
            s+='0';
        }
        else if(c&&n==-1)
        {
            s+='1';
            while(c--)s+='1';
        }
        cout<<s<<'\n';

    }
    return 0;
}



