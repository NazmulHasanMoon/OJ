#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int p,x,y,u;
    set<int>s;
    bool t=false;
    cin>>p>>x>>y;
    int i=(x/50)%475;
    u=x;
    for(int j=0;j<25;j++)
    {
        int v,z=(i*96+42);
        v=((z-42)/96)*50;
        //cout<<z<<' ';
        s.insert(v);
        i=z%475;
        u=v;
        if(i+26==p)
            t=true;
    }
    int z,c(0);
    if(x<y)
        x=y;
    else if(t){
        cout<<c<<endl;
        return 0;
    }
    for(auto k: s){
        if(k>=x){
          z=k;
          break;
        }
    }
    while(x<z){
        x+=100;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
