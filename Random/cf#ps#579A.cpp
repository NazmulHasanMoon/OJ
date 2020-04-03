#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,c(0);
    cin>>x;
    while(x)
    {
        if(x&1)
            c++;
        x/=2;
    }
    cout<<c<<endl;
    return 0;
}
