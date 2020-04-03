#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int n,x,y,z,s;
    while(cin>>n)
    {
        x=y=s=n;
        while(y>=3)
        {
            x=y/3;
            s+=x;
            //cout<<s<<'!'<<y<<"-";
            y=x+(y%3);
            //cout<<y<<endl;
        }
        if(y%3==2)
            s++;
        cout<<s<<'\n';
    }
    return 0;
}
