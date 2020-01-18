#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d,x(0),y;
    cin>>n>>t>>k>>d;
    y=n/k;
    for(int i=0; i<y; i++)
    {
        x+=t;
        if(x>d&&t!=d)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";

    return 0;
}
