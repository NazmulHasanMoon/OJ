#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 10005
#define ll long long
int main()
{
    int n,x,y,c,p,q;
    x=y=p=q=c=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
            y++;
        else
            x++;
        if(x==y&&s[i+1]&&s[i+1]==s[i])
            c++;
    }
    cout<<c<<endl;
    return 0;
}
