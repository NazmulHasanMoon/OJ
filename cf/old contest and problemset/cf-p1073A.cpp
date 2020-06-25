#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,re;
    cin>>n>>s;
    bool t=false;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
        {
            re.push_back(s[i-1]);
            re.push_back(s[i]);
            t=true;
            break;
        }
    }
    if(t)
        cout<<"YES\n"<<re<<endl;
    else
        cout<<"NO\n";
    return 0;
}
