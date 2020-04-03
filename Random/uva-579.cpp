#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double h,m,x,y;
    char c;
    while(1)
    {
        cin>>h>>c>>m;
        if(h==0&&m==0)
            break;
        x=(5.0*m)/60.0;
        y=(h*5.0)-(m-x);
        y*=6.0;
        y=fabs(y);
        cout<<setprecision(3)<<fixed<<min(y,360.0-y)<<'\n';
    }
    return 0;
}
