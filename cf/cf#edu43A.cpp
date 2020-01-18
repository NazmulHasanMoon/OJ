#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    char c[n+3];
    bool t=0;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        if(!t&&c[i]=='1')
            cout<<c[i],t=1;
        else if(t&&c[i]=='0')
            cout<<c[i];
    }
    if(n==1&&c[0]=='0')
        cout<<c[0];
    cout<<endl;
    return 0;
}
