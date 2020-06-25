#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n>>k>>s;
        sort(s.begin(),s.end());
        if(s[0]!=s[k-1])
        {
            cout<<s[k-1]<<endl;
            continue;
        }
        if(s[k]!=s[n-1])
        {
            for(int i=k-1; i<n; i++)
                cout<<s[i];
            cout<<"\n";
            continue;
        }
        int x=(n-k)/k;
        cout<<s[k-1];
        for(int i=0;i<x;i++)cout<<s[k];
        if((n-k)%k!=0)cout<<s[k];
        cout<<"\n";
    }
    return 0;
}
