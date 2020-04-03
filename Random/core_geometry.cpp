#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,z(1);
    cin>>t;
    while(z<=t)
    {
        double a,b,am,bm,cm,dm,c(0);
        cin>>a>>b;
        am=cm=a;
        bm=dm=b;
        for(int i=1;i<4;i++)
        {
           cin>>a>>b;
            am=max(am,a);
            cm=min(cm,a);
            bm=max(bm,b);
            dm=min(dm,b);
        }
        for(int i=0;i<3;i++)
        {
            cin>>a>>b;
            if(cm<=a&&a<=am&&dm<=b&&b<=bm)
                c++;
        }
        if(c==3)
            cout<<"Case "<<z<<": Yes, the square grabs the triangle.\n";
        else
            cout<<"Case "<<z<<": No, it cannot.\n";
        z++;
    }
    return 0;
}
