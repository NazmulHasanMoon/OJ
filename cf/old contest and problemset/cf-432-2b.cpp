#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,x,y;
    cin>>a>>b>>c>>d>>x>>y;
    double p,q,r;
    p=sqrt(pow(abs(a-c),2)+pow(abs(b-d),2));
    q=sqrt(pow(abs(x-c),2)+pow(abs(y-d),2));
    r=sqrt(pow(abs(a-x),2)+pow(abs(b-y),2));
    if(p==q||p==r||q==r)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
