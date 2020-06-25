#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int n,k,x;
    cin>>n;
    while(n--)
    {
        cin>>k>>x;
         cout<<x+9*(k-1)<<'\n';
    }
    return 0;
}
