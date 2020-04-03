#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100002
int main()
{
    int t;
    sf("%d",&t);
    while(t--)
    {
        int n;
        sf("%d",&n);
        double s,c,d;
        s=c=d=0.0;
        while(n--)
        {
            double p,q,x,y,z,r,w;
            sf("%lf %lf %lf",&p,&q,&x);
            z=(x/100.0);
            y=p*z;
            w=(p+y);
            r=w*z;
            y=w-r;
            //cout<<y<<endl;
            if(y>=p)
                c+=((y-p)*q);
            else
                d+=((p-y)*q);
            //cout<<c<<' '<<d<<endl;
        }
        //if(c<=d)
        cout<<setprecision(10)<<fixed<<fabs(c-d)<<endl;

    }
    return 0;
}
