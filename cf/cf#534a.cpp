#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=9;i>=1&&!x;i--)
    {
        if(n%i==0)
            x=i;
    }
    if(x){
    int y=n/x;
    cout<<y<<'\n';
    while(y--)
       cout<<x<<' ';
    }
    return 0;
}
