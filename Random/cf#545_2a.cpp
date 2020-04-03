#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
int a[sz];
deque<int>de;
int main()
{
    faster
    int n,mx(0);
    cin>>n;
    bool ck=false;
    int x(-1),y(-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1&&x==-1)
            x=i;
        else if(a[i]==2&&y==-1)
            y=i;
    }
    int j=max(x,y);
    if(x==-1||y==-1)
    {
        cout<<mx<<'\n';
        return 0;
    }
    x=j-min(x,y);
    for(int i=j-1;i<n&&j<n;)
    {
        while(a[j]!=a[i]&&j<n)
            j++;
        y=j-1-i;
        mx=max(mx,2*min(x,y));
        x=y;
        i=j-1;
    }
    cout<<mx<<'\n';
    return 0;
}
