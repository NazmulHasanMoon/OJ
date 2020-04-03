#include<bits/stdc++.h>
using namespace std;

int fac(int i)
{
    if(i<2)
        return 1;
    return i*fac(i-1);
}
int main()
{
    int x,n;
    cin>>n;
    cout<<fac(n)<<endl;
    return 0;
}


