#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,x(2);
    cin>>n>>m;
    if(n>34)
        cout<<m<<endl;
    else
    {
        for(int i=2;i<=n;i++)
            x*=2;
        cout<<m%x<<endl;
    }
    return 0;
}
