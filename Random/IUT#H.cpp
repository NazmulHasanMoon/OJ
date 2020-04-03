#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i(1);
    cin>>t;
    while(i<=t)
    {
        int x,y;
        cin>>x>>y;
        cout<<"Case "<<i++<<": "<<((x*x)+(y*y))<<endl;
    }
    return 0;
}
