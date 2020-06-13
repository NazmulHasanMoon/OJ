#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n&1){
            int i;
            for(i=3;i<n;i++)
            {
                if(n%i==0)break;
            }
            int x=n+2*(k-1)+i;
            cout<<x<<endl;
        }
        else
            cout<<n+2*k<<endl;
    }
    return 0;
}
