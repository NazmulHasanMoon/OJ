#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        if(n<3){
            cout<<"0\n";
            continue;
        }
        if(n&1)
            cout<<n/2<<'\n';
        else cout<<(n/2)-1<<"\n";
    }
    return 0;
}
