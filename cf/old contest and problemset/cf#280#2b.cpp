#include<bits/stdc++.h>
using namespace std;
#define sz 1001
double a[sz];
int main()
{
    int n,l;
    double x(0.000);
    cin>>n>>l;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
        x=max(x,a[i+1]-a[i]);
    x=max(x/2.0,max(a[0],l-a[n-1]));
    cout<<setprecision(11)<<fixed<<x<<endl;
    return 0;
}
