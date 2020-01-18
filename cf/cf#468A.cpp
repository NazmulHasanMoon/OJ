#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,x,t=1,y;
    cin>>a>>b;
    x=abs(a-b);
    if(x%2!=0)
        t=0;
    x=(x/2);
    y=(x*(x+1))/2;
    y*=2;
    if(!t)
        x++,y+=x;
    cout<<y<<endl;
    return 0;
}
