#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define sz 10002
ll a[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int l,a;
    while(cin>>s)
    {
        l=s.size();
        if(l==1&&s[0]=='0')
            break;
        a=0;
        for(int i=l-1,j=1;i>=0;i--,j++)
           a+=(s[i]-'0')*((1<<j)-1);
        cout<<a<<'\n';
    }
    return 0;
}
