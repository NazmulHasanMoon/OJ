#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r;
    cin>>t;
    while(t--)
    {
        cin>>r;
        double d,s(0.0);
        s+=r;
        d=r+0.0;
        while(d>0.000001)
        {
            double x;
            x=(d*sqrt(2.0)/2.0);
            d=sqrt(pow(d,2)-pow(x,2));
            if(d>0)
                s+=d;//cout<<s<<' '<<d<<endl;
        }
        cout<<setprecision(1)<<fixed<<s<<endl;
    }
    return 0;
}
