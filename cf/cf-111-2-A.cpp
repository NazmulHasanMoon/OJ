#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int n;
    string s;
    cin>>n>>s;
    vector<int>s1,s2;
    for(int i=0; i<n; i++)
        s1.push_back(s[i]-'0');
    for(int i=n; s[i]!='\0'; i++)
        s2.push_back(s[i]-'0');
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    bool t=true;
    if(s1[n-1]==s2[n-1])
    {
        cout<<"NO\n";
        return 0;
    }
    if(s1[n-1]>s2[n-1])
    {
        for(int i=n-2; i>=0&&t; i--)
        {
            if(s1[i]<=s2[i])
                t=false;
        }
    }
    else
    {
        for(int i=n-1; i>=0&&t; i--)
        {
            if(s1[i]>=s2[i])
                t=false;
        }
    }
    if(t)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;

}
