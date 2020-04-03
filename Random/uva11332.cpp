#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n&&n)
    {
        if(n%9==0)
            cout<<"9\n";
        else
            cout<<n%9<<endl;
    }
    return 0;
}
