#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,a,b,c,d;
    cin>>t;
    string s,ans;
    while(t--)
    {
        cin>>s;
        ans.push_back(s[0]);
        int len=s.size()-1;
        for(int i=1;i<len;i+=2)
            ans.push_back(s[i]);
        ans.push_back(s[len]);
        cout<<ans<<'\n';
        ans.clear();
        s.clear();
    }
    return 0;
}


