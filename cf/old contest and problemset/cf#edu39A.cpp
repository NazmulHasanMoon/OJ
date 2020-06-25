#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,n;
    b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>=0)
            b+=a;
        else
            c+=a;
    }
    cout<<b-c<<endl;
    return 0;
}
