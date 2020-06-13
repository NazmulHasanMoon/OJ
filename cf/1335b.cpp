#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    int a,b,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        for(int i=0;i<b;i++)s+=('a'+i);
        int x=b;
        for(int i=0;i<n;)
        {
            for(int j=0;j<b&&i<n;j++,i++)
                cout<<s[j];
        }
        cout<<'\n';
        s.clear();
    }
    return 0;
}
