#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<1)
        n=1+n*(1-n)/2;
    else
        n=n*(n+1)/2;
    cout<<n<<endl;
    return 0;
}
