#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,i(0),y,z;
    cin>>n>>m;
    x=z=n;
    while(z){

        z=x+z/m;
       // cout<<z<<' ';
        if(i==0)
            y=n/m;
        else if(z-x==y)
            break;
        y=(z-x);
        //cout<<y<<' ';
        i++;

    }
    cout<<n+y<<endl;
    return 0;
}
