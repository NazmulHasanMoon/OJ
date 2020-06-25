#include<bits/stdc++.h>
using namespace std;
map<string,int>mm;
int main()
{
    int n,c(0);
    cin>>n;
    map<char,int>mp;
    string s,ss;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;s[j]!='\0';j++)
        {
            if(mp.find(s[j])==mp.end())
                ss.push_back(s[j]),mp[s[j]]=1;
        }
        sort(ss.begin(),ss.end());
        mp.clear();
        if(mm.find(ss)==mm.end())
            c++,mm[ss]=1;
        ss.clear();
    }
    cout<<c<<endl;
    return 0;
}
