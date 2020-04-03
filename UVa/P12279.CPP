#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int t,cs(1),n,s,x;
    while(cin>>t)
    {
        s=n=0;
        if(!t)
            return 0;
        cout<<"Case "<<cs++<<": ";
        while(t--){
            cin>>x;
            if(x)
                n++;
            else
                s++;
        }
        cout<<n-s<<'\n';
    }
}
