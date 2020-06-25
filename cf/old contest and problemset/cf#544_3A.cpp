#include<bits/stdc++.h>
using namespace  std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int a,b,a2,b2,x,y,u,v;
    char c;
    cin>>a>>c>>b>>a2>>c>>b2;
    u=a*60+b;
    v=a2*60+b2;
    x=(v-u)/2;
    u=a;
    x+=b;
    while(x>=60)
    {
        u++;
        x-=60;
    }
    //cout<<x<<' '<<u<<endl;
    if((u/10)<1)
        cout<<"0"<<u<<':';
    else
        cout<<u<<':';
    if((x/10)<1)
        cout<<'0'<<x<<'\n';
    else
        cout<<x<<'\n';
    return 0;
}
