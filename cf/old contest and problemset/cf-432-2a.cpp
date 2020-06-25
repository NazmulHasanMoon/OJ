#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int n,k;
    double t;
    cin>>n>>k>>t;
    if(t<=k)
        cout<<setprecision(0)<<fixed<<t<<endl;
    else if(t>k&&t<=n)
        pf("%d\n",k);
    else
    {
        double l=k-(t-n);
        cout<<setprecision(0)<<fixed<<l<<endl;
    }
    return 0;
}
