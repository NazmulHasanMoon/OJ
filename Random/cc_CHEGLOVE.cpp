#include<bits/stdc++.h>
using namespace std;
#define sz 100002
int a[sz],b[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        x=y=0;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0,j=n-1;i<n;i++,j--)
        {
            if(a[i]<=b[i])
                x++;
            if(a[i]<=b[j])
                y++;
        }
        if(x==n&&y==n)
            cout<<"both\n";
        else if(x==n)
            cout<<"front\n";
        else if(y==n)
            cout<<"back\n";
        else
            cout<<"none\n";
    }
    return 0;
}
