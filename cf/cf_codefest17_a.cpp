#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
int n;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(!mp[s])
            cout<<"NO\n",mp[s]++;
        else
            cout<<"YES\n";
    }
    return 0;
}
