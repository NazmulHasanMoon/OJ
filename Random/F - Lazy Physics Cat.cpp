#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()

int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,x;
        cin>>a>>x;
        b=a;
        double ang=(180-x)/2.0;
        if(ang!=0)
        {
            c=(a*sin(x*(pi/180.0)))/sin(ang*(pi/180.0));
        }
        else c=2*a;
        double s=(a+b+c)/2.0;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        double circle=((pi*a*a)*x)/360.0;
        double ans=circle-area;
        cout<<fixed<<setprecision(6)<<ans<<endl;


    }
    return 0;
}





