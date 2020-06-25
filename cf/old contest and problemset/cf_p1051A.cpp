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
int main()
{
    faster
    int n,lo,up,di,i,x;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        char a,A;
        a='a';
        A='A';
        x=1;
        lo=up=di=0;
        for(i=0; s[i]!='\0'; i++)
        {
            if(islower(s[i]))
                lo++;
            else if(isupper(s[i]))
                up++;
            else if(isdigit(s[i]))
                di++;
        }
        if(lo&&up&&di)
            cout<<s;
        else if((lo&&up&&!di)||(lo&&di&&!up)||(up&&di&&!lo))
        {
            bool ok=true;
            loop(j,0,i)
            {
                if(lo>1&&ok&&islower(s[j]))
                {
                    ok=false;
                    if(!up)
                        cout<<A;
                    else if(!di)
                        cout<<x;
                }
                else if(up>1&&ok&&isupper(s[j]))
                {
                    ok=false;
                    if(!lo)
                        cout<<a;
                    else if(!di)
                        cout<<x;
                }
                else if(di>1&&ok&&isdigit(s[j]))
                {
                    ok=false;
                    if(!lo)
                        cout<<a;
                    else if(!up)
                        cout<<A;
                }
                else
                    cout<<s[j];
            }

        }
        else if((lo&&!up&&!di)||(!lo&&up&&!di)||(!lo&&!up&&di))
        {
            loop(j,0,i)
            {
                if(!up)
                    cout<<A,up=1;
                else if(!lo)
                    cout<<a,lo=1;
                else if(!di)
                    cout<<x,di=1;
                else
                    cout<<s[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
