#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int x,y;
    x=(v1*s)+(t1*2);
    y=(v2*s)+(t2*2);
    if(x==y)
        cout<<"Friendshi\n";
    else if(x<y)
        cout<<"First\n";
    else
        cout<<"Second\n";
    return 0;
}
