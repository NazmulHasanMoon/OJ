#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    double a,b,x,y;
    scanf("%d %d",&n,&m);
    x=12300000000.2746786498;
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf",&a,&b);
        x=min(x,a/b);
    }
    x*=(double)m;
    cout<<setprecision(11)<<fixed<<x<<endl;
    return 0;
}
