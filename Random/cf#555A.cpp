#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    long long re(0),n,x;
    bool t;
    cin>>n;
    if(n==10)
        return cout<<"19\n",0;
    while(n>10)
    {
        x=n%10;
        //cout<<x<<' '<<n<<endl;
        if(x)
            re+=10-x,n/=10,n+=1;
        else
            n/=10;
    }
    if(n<10)
        re+=9;
    cout<<re<<'\n';
    return 0;
}
