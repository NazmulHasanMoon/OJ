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
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s4,s5;
bool base_Con(int y)
{
    int q=y;
    s4.clear();
    s5.clear();
    if(y<2)
        return true;
    while(q!=0)
    {
        int x=q%2;
        s4.pb(char(48+x));
        q/=2;
    }
    s5=s4;
    ////cout<<s4<<' '<<s5<<endl;
    reverse(s5.begin(),s5.end());
    return s4==s5;
}
int main()
{
    faster
    string s,s2,s3;
    int n;
    cin>>n;
    map<string,int>m,m2;
    m2["thousand"]=1000;
    m2["hundred"]=100;
    m["zero"]=0;
    m["one"]=1;
    m["two"]=2;
    m["three"]=3;
    m["four"]=4;
    m["five"]=5;
    m["six"]=6;
    m["seven"]=7;
    m["eight"]=8;
    m["nine"]=9;
    m["ten"]=10;
    m["eleven"]=11;
    m["twelve"]=12;
    m["thirteen"]=13;
    m["fourteen"]=14;
    m["fifteen"]=15;
    m["sixteen"]=16;
    m["seventeen"]=17;
    m["eighteen"]=18;
    m["nineteen"]=19;
    m["tw"]=2;
    m["th"]=3;
    m["fo"]=4;
    m["fi"]=5;
    m["si"]=6;
    m["se"]=7;
    m["ei"]=8;
    m["ni"]=9;
    int x;
    cin.ignore();
    while(n--)
    {
        x=0;
        getline(cin,s);
        transform(s.begin(), s.end(), s.begin(),::tolower);
        ///cout<<s<<endl;
        int z,len=s.size();
        z=1;
       for(int j=len-1;j>=0;j--)
        {
            if(isspace(s[j])||j==0)
            {
                if(j==0)
                    s2.pb(s[j]);
                reverse(s2.begin(),s2.end());
                if(m.find(s2)!=m.end())
                    x=(z*m[s2])+x;
                else if(m2.find(s2)!=m2.end())
                    z=m2[s2];
                else
                {

                    int y=0;
                    s3.pb(s2[0]);
                    s3.pb(s2[1]);
                    if(m.find(s3)!=m.end())
                        y=m[s3];
                    y=y*10;
                    x=y+x;

                    s3.clear();
                }
                s2.clear();
            }
            else
                s2.pb(s[j]);
        }
        ///cout<<x<<endl;
        bool ck=base_Con(x);
        if(ck)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        s.clear();
        ///cout<<x<<'\n';
    }
    return 0;
}
