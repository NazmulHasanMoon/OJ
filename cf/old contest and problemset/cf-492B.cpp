#include<bits/stdc++.h>
using namespace std;
#define sz 1001
int a[sz];
int main()
{
    int n,l,x(0);
    cin>>n>>l;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
        x=max(x,a[i+1]-a[i]);
    x=max(x,max(a[0],l-a[n-1]));
    printf("%.10lf\n",x/2.0);
    return 0;
}
