#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 1000005
#define ll long long
int main()
{
    int n,a,s,c;
    s=c=0;
    sf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sf("%d",&a);
        c=1000000-a;
        s=a-1;
    }
    cout<<min(s,c)<<endl;
    return 0;
}
