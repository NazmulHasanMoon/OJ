#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define ff first
#define ss second
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b,c)   for(int a=b;a<c;a++)
int main()
{
    faster
    int r,x,y,z,s,p,q;
    cin>>x>>y>>z;
    vector<char>v,v2,final;
    p=x,q=y;
    s=x+y;
    if(y>x)
        v.push_back('1'),y--,r=1;
    else
        v.push_back('0'),x--,r=0;
    while(z)
    {
        if(r)
            v.push_back('0'),r=0,x--;
        else
            v.push_back('1'),r=1,y--;
        z--;
    }
    if(y)
    {
        for(auto i:v)
        {
            ///cout<<i;
            if(i=='1'&&y){
                while(y)
                    v2.push_back('1'),y--;
            }
            v2.push_back(i);
        }
    }
    else
    {
        for(auto i: v)
            v2.push_back(i);
    }
    if(x)
    {
        for(auto i:v2)
        {
            if(i=='0'&&x){
                while(x)
                    final.push_back('0'),x--;
            }
            final.push_back(i);
        }
    }
    else
    {
        for(auto i:v2)
            final.push_back(i);
    }
    for(auto i:final)
        cout<<i;
    cout<<'\n';
    return 0;
}
