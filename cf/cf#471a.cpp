#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double hh,mm,h,d,c,n,ans;
    cin>>hh>>mm>>h>>d>>c>>n;
    double x=c-(c*.2);
    double y=hh*60.0+mm;
    n*=1.0;
    if(y>=1200)
        ans=ceil(h/n)*x;
    else
    {
        double z=((1200-y)*d)+h;
        ans=min((ceil(z/n)*x),(ceil(h/n)*c));
    }
    cout<<setprecision(10)<<fixed<<ans<<endl;
    return 0;
}
