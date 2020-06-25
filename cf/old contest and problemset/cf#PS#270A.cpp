#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double y,n,z;
        cin>>y;
        n=ceil(2.0/abs(1-(180.0/y)));
        z=(2.0/abs(1-(180.0/y)));
        //cout<<n<<'-'<<z<<endl;
        if(n!=z)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
