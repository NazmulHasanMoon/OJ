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
int main()
{
    faster
    double h,h2,h3,x,y,z,r,a[4];
    cin>>h>>h2>>h3;
    r=h-h2;
    z=h-h3;
    y=h/2;
    a[0]=PI*((r*r*(h/2.0))-(r*r*r)/3.0);
    a[2]=PI*((z*z*(h/2.0))-(z*z*z)/3.0);
    a[2]-=a[0];
    a[1]=(4.0*PI*y*y*y)/3.0;
    a[1]-=(a[0]+a[2]);
    if(a[1]-a[0]>EPS)
    {
        if(a[2]-a[0]>EPS){
            cout<<fixed<<setprecision(9)<<a[0]<<' ';
            if(a[2]-a[1]>EPS)
                cout<<fixed<<setprecision(9)<<a[1]<<' '<<a[2]<<'\n';
            else
                cout<<fixed<<setprecision(9)<<a[2]<<' '<<a[1]<<'\n';
        }
        else{
            cout<<fixed<<setprecision(9)<<a[2]<<' ';
            if(a[0]-a[1]>EPS)
                cout<<fixed<<setprecision(9)<<a[1]<<' '<<a[0]<<'\n';
            else
                cout<<fixed<<setprecision(9)<<a[0]<<' '<<a[1]<<'\n';
        }

    }
    else
    {
        if(a[2]-a[1]>EPS){
            cout<<fixed<<setprecision(9)<<a[1]<<' ';
            if(a[2]-a[0]>EPS)
                cout<<fixed<<setprecision(9)<<a[0]<<' '<<a[2]<<'\n';
            else
                cout<<fixed<<setprecision(9)<<a[2]<<' '<<a[0]<<'\n';
        }
        else{
            cout<<fixed<<setprecision(9)<<a[2]<<' ';
            if(a[0]-a[1]>EPS)
                cout<<fixed<<setprecision(9)<<a[1]<<' '<<a[0]<<'\n';
            else
                cout<<fixed<<setprecision(9)<<a[0]<<' '<<a[1]<<'\n';
        }
    }
    return 0;
}