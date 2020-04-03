#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,i,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n*=63;
        n+=7492;
        n*=5;
        n-=498;
        i=0;
        r=n;
        while(i<2&&n!=0)
        {
            r=n%10;
            n/=10;
            i++;
        }
        cout<<abs(r)<<endl;
    }
    return 0;
}
